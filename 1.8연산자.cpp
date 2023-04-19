
/*
리터럴
피연산자
단항/이항/삼항연산자
*/


#include <iostream>
using namespace std;

int main()
{
	int x(2); // 여기서 x는 변수=메모리공간을 갖는 숫자 여기서 (2)는 리터럴=그냥 숫자....
	cout << x + 2 << endl; //여기서 +2 가 피연산자 , 연산자 + * - 
	int y = (x > 0) ? 1 : 2; // 삼항 연산자 (x>0) ? => x>0이 참이면 1을 갖고 거짓이면 2를 가지는것
	cout << y << endl;
	cout << "i love soonmu" << endl; //저런 문자열도 리터럴임 =그냥 문자...
}
