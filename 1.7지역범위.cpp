// 1.7지역범위.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
using namespace std;

int main()
{
    int x(0);//x=0;
    cout << x << &x << endl; //&x =>메모리 주소를 알려주는 함수

    {
        int x = 1; //중괄호가 안에 만들어지면 앞에 int x(0)과는 다른 공간임!!!!!!!!!!
        cout << x << &x << endl;
    }

    {
        int x(2);
        cout << x << &x << endl;
    }
}
/*
000000059A2B8F524   => 첫번째 INT X의 값
100000059A2B8F544   => 두번째 INT X의 값
200000059A2B8F564   =>=> 세번째 INT X의 값
이렇게 같은 int x 여도 중괄호를 쳐주면 다른 int x 라고 여김!!-
*/
#include <iostream>
using namespace std;

int main()
{
    int x(0);//x=0;
    cout << x << &x << endl; //&x =>메모리 주소를 알려주는 함수

    {
        x = 1; //중괄호가 안에 만들어지면 앞에 int x(0)과는 다른 공간임!!!!!!!!!!
        cout << x << &x << endl;
    }

    {
        int x(2);
        cout << x << &x << endl;
    }
}
/*
000000024F75DF8E4
100000024F75DF8E4
200000024F75DF904
=> 이건 같은 메모리 공간을 공유함
*/
#include <iostream>
using namespace std;

void dosomething(int x)
{
    x = 123;
    cout << x << endl;
}

int main()

{
    int x(0);
    cout << x << endl;
    dosomething(x);
    cout << x << endl;
}
/*
0
123
0
*/