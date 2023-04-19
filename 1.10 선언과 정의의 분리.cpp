// 1.10 선언과 정의의 분리.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
using namespace std;

int add(int a, int b)
{
    return a + b;
}

int mutiply(int a, int b)
{
    return a * b;
}

int sub(int a, int b)
{
    return a * b;
}

int main()
{
    cout << add(1, 2) << endl; //3
    cout << mutiply(1, 2) << endl; //2
    cout << sub(1, 2) << endl; //2
}

//이 위에 코드에서 int main을 위로 올리고 싶다면...?

#include <iostream>
using namespace std;

int add(int a, int b);
int mutiply(int a, int b);
int sub(int a, int b);

int main()
{
    cout << add(1, 2) << endl; //3
    cout << mutiply(1, 2) << endl; //2
    cout << sub(1, 2) << endl; //2
}
// =>컴퓨터는 순서대로 계산하기에 무작정  int main 만 위로 올리면 error뜸! 선언을 미리 해줘야됨
int add(int a, int b)
{
    return a + b;
}

int mutiply(int a, int b)
{
    return a * b;
}

int sub(int a, int b)
{
    return a * b;
}

