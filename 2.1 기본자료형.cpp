/*
char = 문자 or 문자를 숫자로 바꾼 것
short = 짧은 문자
long = 긴 문자
long long = 엄청나게 긴 문자..중얼중얼
unsined char=문자를 숫자로 변환한건데 - 인거
float = 실수
double =float보다 더 큰거쓸 때
bool =true or false
void = 중요함
null
*/
#include <iostream>
using namespace std;

int main()
{
	bool bvaule = false;
	cout << (bvaule ? 1 : 0) << endl; //bvaule가 false 니까 거짓인 오른쪽 값 0이 나옴

	char cvaule = 65; // ==65를 문자로 하면 A임
	cout << cvaule << endl;

	float fvaule = 3.141592f; // flaot 은 숫자 뒤에 f를 붙임
	double dvaule = 3.141592;
	cout << fvaule << endl;
	cout << dvaule << endl;

	//변수의 사이즈 측정
	cout << sizeof(fvaule) << endl;
	cout << sizeof(dvaule) << endl;

	int a(123);//direct initialization
	int b{ 123 };//uniform initialization

	int i = (int)3.141592; // 실수를 정수로변환하려면 (int)를 앞에 붙여주면 됨!

	int k = 0, l(456), m{ 123 }; //k=0이고 l=456, m=123이라는뜻 이렇게 다양하게 선언 가능
}