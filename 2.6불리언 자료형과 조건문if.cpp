// 2.6불리언 자료형과 조건문if.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
using namespace std;
//a와 b가 같은지 다른지 구별하는 함수
bool isequal(int a, int b)
{
    bool result = (a == b);
    return result;
}

int main()
{
    cout << std::boolalpha;
    cout << isequal(1, 1) << endl;
    cout << isequal(0, 1) << endl;
}
/*
int main()
{
    bool b1 = true;//true=1 false=0
    bool b2(false);
    bool b3(0);
    b3 = false;

    
    cout << b3 << endl; //0 b3는 처음에는 트루라고 입력됐지만 마지막문장에서 false입력됨
    cout << b1 << endl; //1
    cout << !true << endl; // !때문에 false로 나옴

    if (3 > 1) // 2개 이상의 결과 출력할때 중괄호 필수!
    {
        cout << "dd" << endl;
    }
    else
    {
        cout << "good^^" << endl;
    }
}
*/

