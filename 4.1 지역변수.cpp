// 4.1 지역변수.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//
/*
#include <iostream>
using namespace std;

int main()
{
    int apple = 5;
    
    cout << apple << endl; //5
    
    if(1)
    {
        apple = 1; 
        cout << apple << endl; //1
    }

    cout << apple << endl; //1
}

*/
//namespace란?
#include <iostream>
using namespace std;

namespace work1
{
    int a = 1;
    void dosome()
    {
        a += 3;

    }
}
//이름도 같고()안에 든 것도 같을때 충돌하지 않으려면? namespace로 공간을 쪼갠다

namespace work2
{
    int a = 1;
    void dosome()
    {
        a += 5;
    }
}

int main()
{
    work1::a; // ::영역 범위 결정
    work1::dosome();

    work2::a;
    work2::dosome();
}