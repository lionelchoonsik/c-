
//브레이크 버튼 누르고 결과화면 동시에 보는거 DEBUG->옆버튼 클릭->윈도우 누르면서 오른쪽 마우스 버튼 누르면 화면분할될거임
#include <iostream>
using namespace std;

int addtwonumbers(int num1, int num2)
{
	int sum = num1 + num2; 
	return sum;
}

int main()
{	
	cout << addtwonumbers(1,2) << endl; //원래는 1+2 , 4+2,1+8 이렇게 하나하나 더해야하는데 저 addtwonumber함수를 만들어서 편하게 숫자만 넣으면 덧셈을 해줄 수 있음. 또 sum=num1*num2이렇게 바꾸면 바로 곱셈도 가능
	cout << addtwonumbers(4, 2)<< endl;
	cout << addtwonumbers(1, 8)<< endl;
	return 0;
  
}

#include <iostream>
using namespace std;

void printhelloworld()
{
	cout << "hello world" << endl;
}

int main()
{
	printhelloworld();
	return 0; // main()은 특별한 놈이라 return 0; 을 안적어줘도됨
}
#include <iostream>
using namespace std;

int addtwonumber(int a, int b)
{
	return a + b; //return =>반환값 리턴은 밑에 넣어주는 역할임
}

int main()
{
	int sum = addtwonumber(1, 2); //여기서 return a+b를 받는거임
	cout << sum << endl; //=>3나옴
}

