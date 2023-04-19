
/* 
char = 1byte
short=2btye
int=2byte
long=4byte
longlong=8byte
*/

#include <iostream>
using namespace std;

int main()
{
	short s = 1;
	int i = 1;
	long l= 1;
	long long ll= 1;
	cout << sizeof(short) << endl;
	cout << sizeof(int) << endl;
	cout << sizeof(long) << endl;
	cout << sizeof(long long) << endl;
}

