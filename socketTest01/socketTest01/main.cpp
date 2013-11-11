#include <string>
#include "SockStream.h"

using namespace std;

int main()
{
	//sending_udpsocket sock_send;

	client_tcpsocket sock;
	
	sock.open("192.168.1.2",10002);
	
	cout << "After Opening Socket" << endl;
	int conn = sock.connected();
	cout << conn << endl;
	char str[4];
	str[0] = '5';
	str[1] = '6';
	str[2] = '7';
	str[3] = '8';
	size_t _size;
	
	Sleep(500);
	_size = sock.write(str,4);
	cout << "Write Finished" << endl;
	
	Sleep(8000);
	char readVal[4];
	_size = sock.read(readVal,4);
	cout << "Read Finished" << endl;
	cout << readVal << endl;
	cin >> conn;

	return 1;
}