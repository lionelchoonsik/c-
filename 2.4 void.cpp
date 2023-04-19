
/*나중에 포인터 할때 자세하게 다룰 예정*/
#include <iostream>
using namespace std;

void function()
{

}
int main()
{
    int i = 123;
    float f = 123.456f;

    void* myvoid;

    myvoid = (void*)&i; // &i=정수형 변수의 주소
    myvoid = (void*)&f; // & f=실수형 변수의 주소

}

