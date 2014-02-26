
#include "RTC3Dclient.h"
#include <iostream>
#include <string>

#define ANALOG_NUM 4

using namespace std;

int testFunction()
{
	Client m_Client;

	char szHost[100];
	gethostname( szHost, 100);
	string m_sHostname = szHost;
	DWORD m_dwIP = ntohl( m_Client.ulGetIPAddress( szHost ) );

	cout << "Host Name: " << szHost << endl;
	//cout << "IP Address: " << m_dwIP << endl;

	m_Client.bConnect( m_dwIP );
	if( m_Client.bIsConnected() )
	{
		cout << "Client is connected" << endl;
		vector<float> m_vAnalog;
		
		if( m_Client.nSendCommand( "StreamFrames AllFrames" ) == 0 )
		{
			cout << "Streaming Analog Data" << endl;
		}
		
		if( m_Client.nGetNumAnalog() == 8)
		{
			m_vAnalog.resize(m_Client.nGetNumAnalog());
		}
		else
		{
			cout << "Resize Fail" << endl;
		}

		while(1)
		{
			if( m_vAnalog.size() == 8)
			{
				m_Client.GetLatestAnalog( m_vAnalog );

				cout << "Analog " << ANALOG_NUM << ": " << m_vAnalog[ANALOG_NUM] << endl;
				Sleep(100);
				cout << endl;
			}
		}
	}
	else
		cout << "Client is disconnected" << endl;
	

	return 1;
}

void main()
{
	int choice;
	testFunction();
	cin >> choice;
	return;
}