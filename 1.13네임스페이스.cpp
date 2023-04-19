//두개 다 같은 이름을 쓰고싶어...ㅜㅜ 그럴땐 namespace 이용!

#include <iostream>
using namespace std;

namespace myspace1 
{
    int dosomething(int a, int b)
    {
        return a + b;
    }
}

int dosomething(int a, int b)
{
    return a * b;
}

int main()
{
    cout << dosomething(3, 4) << endl; //이렇게 출력하면 밑에있는 dosomething 나옴 답:12 위에 a+b 쓰고싶으면
    cout << myspace1::dosomething(3, 4) << endl; // namespace의 이름:: 해주면 됨! 답 :7
}
