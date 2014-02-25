/*****************************************************************
Name:			rtC3Dclient.h

Description:
	Definition of the NDI Real Time C3D client v1.0.
	and _AFXDLL defined in preprocessor options

	Note: If you are using pre-build rtC3Dclient.dll, the application 
	which is using it has to be compiled as Multithreaded DLL
	to keep the DLL using the same heap as the application.
	Otherwise any memory deallocation in the application of the memory 
	allocated in the .dll, will cause a run-time error.


	Copyright (C) 2007, Northern Digital Inc. All rights reserved.

	All Northern Digital Inc. (“NDI”) Media and/or Sample Code and/or Sample Code
	Documentation (collectively referred to as “Sample Code”) is licensed and provided "as
	is” without warranty of any kind. The licensee, by use of the Sample Code, warrants to
	NDI that the Sample Code is fit for the use and purpose for which the licensee intends to
	use the Sample Code. NDI makes no warranties, express or implied, that the functions
	contained in the Sample Code will meet the licensee’s requirements or that the operation
	of the programs contained therein will be error free. This warranty as expressed herein is
	exclusive and NDI expressly disclaims any and all express and/or implied, in fact or in
	law, warranties, representations, and conditions of every kind pertaining in any way to
	the Sample Code licensed and provided by NDI hereunder, including without limitation,
	each warranty and/or condition of quality, merchantability, description, operation,
	adequacy, suitability, fitness for particular purpose, title, interference with use or
	enjoyment, and/or non infringement, whether express or implied by statute, common law,
	usage of trade, course of dealing, custom, or otherwise. No NDI dealer, distributor, agent
	or employee is authorized to make any modification or addition to this warranty.
	In no event shall NDI nor any of its employees be liable for any direct, indirect,
	incidental, special, exemplary, or consequential damages, sundry damages or any
	damages whatsoever, including, but not limited to, procurement of substitute goods or
	services, loss of use, data or profits, or business interruption, however caused. In no
	event shall NDI’s liability to the licensee exceed the amount paid by the licensee for the
	Sample Code or any NDI products that accompany the Sample Code. The said limitations
	and exclusions of liability shall apply whether or not any such damages are construed as
	arising from a breach of a representation, warranty, guarantee, covenant, obligation,
	condition or fundamental term or on any theory of liability, whether in contract, strict
	liability, or tort (including negligence or otherwise) arising in any way out of the use of
	the Sample Code even if advised of the possibility of such damage. In no event shall
	NDI be liable for any claims, losses, damages, judgments, costs, awards, expenses or
	liabilities of any kind whatsoever arising directly or indirectly from any injury to person
	or property, arising from the Sample Code or any use thereof
*****************************************************************/

#ifndef __RTC3DCLT_HEADER_____DEFINED_
#define __RTC3DCLT_HEADER_____DEFINED_

#pragma warning( disable: 4251 )
#include <vector>
using namespace std;


#ifdef RTC3DCLIENT_EXPORTS
#define RTC3DCLIENT_API __declspec(dllexport)
#else
#define RTC3DCLIENT_API __declspec(dllimport)
#endif

#define RTC3DCLIENT_CODE_NO_ERROR	0

#define C_ERR_WSSTART	(0x00200000)	// failed starting winsock

// message definitions indicating the arrival of the specific packet 
#define MSG_CLIENT_ARRIVED_EMPTY	(WM_APP + 1000)						// empty packet was received
#define MSG_CLIENT_ARRIVED_DATA		(MSG_CLIENT_ARRIVED_EMPTY + 1 )		// data frame packet was received
#define MSG_CLIENT_ARRIVED_PROPS	(MSG_CLIENT_ARRIVED_EMPTY + 2 )		// properties packet was received
#define MSG_CLIENT_ARRIVED_ERROR	(MSG_CLIENT_ARRIVED_EMPTY + 3 )		// error packet was received
#define MSG_CLIENT_ARRIVED_STRING	(MSG_CLIENT_ARRIVED_EMPTY + 4 )		// string/command packet was received

// defines needed for ndtypes.h
#ifndef PLATFORM_X86
#define PLATFORM_X86
#endif

#ifndef __WINDOWS_H
#define __WINDOWS_H
#endif

#include <winsock2.h>

#include "ndtypes-sample.h"
#include "rtC3Ddatatypes.h"

typedef enum Status
{
	connected,
	disconnected,
	streaming
}Status;

struct WorkerInfoClient;

RTC3DCLIENT_API int nGetClientVersion( char* pszVersionString, char* pszVersionNumber );

// This class is exported from the RTC3Dclient.dll
class RTC3DCLIENT_API Client
{
	friend WorkerInfoClient;
public:
	Client();
	virtual ~Client();

	// server connectivity
	virtual bool bConnect( const char * szHost, int nPort = 3020 );		// connects to the server
	virtual bool bConnect( DWORD dwAddress, int nPort = 3020 );
	virtual bool bIsConnected() const;
	virtual bool bDisconnect();			// disconnects from the server
	
	// application connectivity
	virtual void SetMsgTarget( HWND hWnd );		// sets the target window for messages about received packets
	virtual unsigned int GetLatest3d( vector<Position3d> & vLatest3d ) ;				// outputs vector of latest 3d values and the frame number
	virtual unsigned int GetLatest6d( vector<QuatErrorTransformation> & vLatest6d ) ;	// outputs vector of latest 6d quaternion values and the frame number
	virtual unsigned int GetLatest6d( vector<ErrorTransformation> & vLatest6d ) ;		// outputs vector of latest 6d euler values and the frame number
	virtual unsigned int GetLatestAnalog( vector<float> & vLatestAnalog ) ;				// outputs vector of latest voltage values and the frame number
	virtual unsigned int GetNext3d( vector<Position3d> & vNext3d );					// outputs vector of next 3d values and the frame number - use this for real-time critical apps
	virtual unsigned int GetNext6d( vector<QuatErrorTransformation> & vLatest6d ) ;	// outputs vector of next 6d quaternion values and the frame number - use this for real-time critical apps
	virtual unsigned int GetNext6d( vector<ErrorTransformation> & vLatest6d ) ;		// outputs vector of next 6d euler values and the frame number - use this for real-time critical apps
	virtual unsigned int GetNextAnalog( vector<float> & vLatestAnalog ) ;			// outputs vector of next voltage values and the frame number - use this for real-time critical apps
	virtual double Get3dTimeStamp() const;
	virtual double Get6dTimeStamp() const;
	virtual double GetAnalogTimeStamp() const;
	virtual int nGetNum3d() const;	// number of 3d items
	virtual int nGetNum6d() const;	// number of 6d items
	virtual int nGetNumAnalog() const; // number of analog items
	virtual int nGetNumEvents( ) ;		// get number of events
	virtual C3DEvent GetEvent( int nIndex );
	virtual C3DEvent GetLatestEvent();
	virtual void RemoveEvent( int nIndex );
	virtual const char * sGetLastParameters();	// returns the XML string containing last requested data parameters

	// log of text responses from server
	virtual int nGetNumResponses();		// get number of responses in log
	virtual const char *sGetResponse(int nIndex); // retrieves the response from the list
	virtual const char* sGetLatestResponse();     // retrieves the latest response from the list
	virtual void RemoveResponse( int nIndex );	// removes the response from the list

	// commands
	virtual int nSendVersion(const char *cString);	// sends requested communication protocol version e.g. "1.0"
	virtual int nSendBigEndian( bool bBigEndian );  // sends a SetByteOrder command
	virtual int nSendStartStreamingAll( int nFrequency = 0, int nFreqDivisor = 0);  // start streaming all data
	virtual int nSendStartStreaming(bool b3d = true, bool b6d = false, bool bAnalog = false, bool bForce = false, bool bEvents = false, int nFrequency = 0, int nFreqDivisor = 0);
	virtual int nSendStopStreaming();
	virtual int nSendFrame(bool b3d = true, bool b6d = false, bool bAnalog = false, bool bForce = false, bool bEvents = false);
	virtual int nSendFrameAll();
	virtual int nSendParameters(bool b3d = true, bool b6d = false, bool bAnalog = false, bool bForce = false, bool bEvents = false);
	virtual int nSendParametersAll();
	virtual int nSendCommand(const char *cString );	// sends a command to the server

	virtual unsigned long ulGetIPAddress( const char *szHostName, char *szIPAddressOut = NULL);
protected:
	virtual void DataLock() ;
	virtual void DataUnlock() ;
	virtual void SetEventNew3d();
	virtual void ResetEventNew3d();
	virtual void SetEventNew6d();
	virtual void ResetEventNew6d();
	virtual void SetEventNewAnalog();
	virtual void ResetEventNewAnalog();

protected:
	HWND	m_hWnd;
	CRITICAL_SECTION m_DataLock;
	HANDLE 	m_h3dArrivedEvent;		// 3d arrived event
	HANDLE 	m_h6dArrivedEvent;		// 6d arrived event
	HANDLE 	m_hAnalogArrivedEvent;		// analog arrived event
	Status m_status;
	SOCKET m_socket;
	char m_szAddress[16];
	HANDLE m_hRecevingThread;
	bool m_bNetworkByteOrder;

	double m_lf3dTimeStamp;
	double m_lf6dTimeStamp;
	double m_lfAnalogTimeStamp;
	double m_lfForceTimeStamp;

	unsigned int m_uFrame3d;
	unsigned int m_uFrame6d;
	unsigned int m_uFrameAnalog;
	unsigned int m_uFrameForce;

	// data
	vector<Position3d> m_vLast3d;
	vector<QuatErrorTransformation> m_vLast6d;
	vector<float> m_vLastAnalog;
	vector<ForcePlate> m_vLastPlate;
	vector<C3DEvent> m_vEvents;
	vector<string> m_vCommands;
	string m_sLastParameters;

};

#endif /* __RTC3DCLT_HEADER_____DEFINED_ */