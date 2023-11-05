// 3.1연산자우선순위와 결합법칙.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//
/* 
연산자 우선순위
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    //int x = (4 + 2) * 3; //=는 같다라는 의미가 아니라 대입하라는 의미임.. 오른쪽에 있는걸 계산하고 그 뒤에 왼쪽으로 넘기는거임 ㅇㅇ
    //  ^ -> 이건 제곱근 아님 pow가 제곱임 
    int x = std::pow(2, 3);
    cout << x << endl;
    return 0;
}


#include <iostream>
using namespace std;
int main()
{
    int x = 1;
    int y = 1+x;
    int z = x % y; // % 이건 나머지 연산자임 6%3하면 나머지 0나옴
    int j = x; //1을 j에 넣어라 , 즉 j는 1이라는 뜻
    j += y; // j=j+y라는 뜻임
    z %= y; // z=z%y라는 뜻임

    cout << 7/4 << endl; // /이건 몫 연산자임 !
    cout << -5 / 2 << endl; //-2나옴 (원래는 -2.5여야하는데 뒷자리수는 절삭됐다고 함
    cout << -5 % 2 << endl; //답 -1 나옴 ( 왼쪽에 있는 숫자가 음수면 답도 음수, 양수면 답도 양수임)
    return 0;
}


//증감연산자
#include <iostream>
using namespace std;
int main()
{
    int x = 5;
    int y = ++x; //x에다가 1을 더한다는 의미 , --x; 하면 1씩 줄어듦
    int z = x--;
    cout << y << endl;
    cout << z << endl;
    return 0;

}//둘다 6나옴

#include <iostream>
using namespace std;
int main()
{
    int x = 6, y = 6;
    cout << x << "  " << y << endl; // 6 6 나옴
    cout << ++x << " " << --y << endl;//7  5 나옴 x에 ++1을 먼저 더한다음에 출력한거 y에 --1을 먼저 한 다음 출력한거 
    cout << x++ << " " << y-- << endl; //7 5 나옴 cout<<에 x를 먼저 보낸다음에 그 다음에 x에 ++1이 더해진것, 그래서 디버그결과에 안나옴
    cout << x << " " << y << endl; // 7  5 나옴
} //*결론  ++ --가 앞에 붙냐 뒤에붙냐에 따라 결과가 다름

#include <iostream>
using namespace std;
int main()
{
    int x = 6, y = 6;
    cout << x << " " << y << endl;
    cout << ++x << " " << --y << endl;
    cout << x << " " << y << endl;
    cout << x++<<" " << y-- << endl;
    cout << x << " " << y << endl;

}*/
/*
6 6
7 5
7 5
7 5
8 4


#include <iostream>
using namespace std;
int add(int a,int b)
{
    return a + b; // 1+2하면 3이 나와야하는데 디버깅하면 4가 나옴 ;ㅅㅂ 이렇게 하지 말라함

}

int main()
{
    using namespace std;
    int x = 1;
    int v = add(x, ++x); //x에 1이 들어가고 ++x하면 2가 됨
   
    cout << v << endl;
    return 0;
}
#include <iostream>
using namespace std;
int add(int a, int b)
{
    return a + b; // 1+2하면 3이 나와야하는데 디버깅하면 4가 나옴 ;ㅅㅂ 이렇게 하지 말라함

}

int main()
{
    using namespace std;
    int x = 1,y=2;
    int v = add(x, ++y); //x에 1이 들어가고 ++x하면 2가 됨

    cout << v << endl;
    return 0;

} //답으로 4가 나옴 == x는 1이고 ++y하면 3인데 맨처음 int add(int a, int b) return a+b해서 1+3이 되기 때문 */