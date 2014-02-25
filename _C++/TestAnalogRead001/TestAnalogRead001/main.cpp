
#include "RTC3Dclient.h"
#include <iostream>
#include <string>

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
		m_Client.GetAnalogTimeStamp();
		m_Client.sGetLatestResponse();
		vector<float> m_vAnalog;
		m_vAnalog.resize( m_Client.nGetNumAnalog() );
		m_Client.GetLatestAnalog( m_vAnalog );
	
		for(int i = 0; i < m_vAnalog.size(); i++)
		{
			cout << "Analog " << i << ": " << m_vAnalog[i] << endl;
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