// 3.4 sizeof,쉼표,조건부 연산자.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//
/*
#include <iostream>
using namespace std;

int main()
{
    float a;
    sizeof(float); //sizeof는 연산자임 !! 그래서 sizeof a; 이렇게 괄호없이 쳐도 ㄱㅊㄱㅊ 근데 sizeof float 이렇게 괄호없이는 안댐 ㅎㅎ
    sizeof(a);
    
    return 0;
}


//comma operator
#include <iostream>
using namespace std;

int main()
{
    int x = 3;
    int y = 10;
   // int z = (++x, ++y); 이게 밑에 있는 3줄이랑 똑같은거임
    ++x;
    ++y;
    int z = y;
    cout << x << " " << y << " " << z << endl; //4 11 11 이렇게 답 나옴  x,y에 4,11까진 이해가 가는데 왜 z가 11일까?
    return 0;
}

//comma operator
#include <iostream>
using namespace std;

int main()
{
    
    int a = 1, b = 10;
    int z;
    z = a, b;

    int c = 2, d = 5;
    int j;
    j = (++c,c+d);

    cout << z << endl; //답으로 1이 나옴> 왜 10이 아니라 1이 나왔을까? (z=a),b라고 우선순위가 있어서 z=a가 됨.. 그래서 대입하고 싶으면 z=(a.b)이렇게 해주면 답으로 10이 나옴
    cout << j << endl;// 답으로 8나옴

    return 0;
}*/

//conditional operator == arithmathic if 이라고도함 =내가어케앎;;
#include <iostream>
using namespace std;
/*
int main()
{
    bool insale = true;
    int price;

    if (insale)
        price = 10;
    else
        price = 100;
    cout << price << endl;
    return 0;
}
이게 밑에꺼랑 똑같은거임 int<-> const int 로 바꾼거 ㅅㄱ*/ 
/*int main()
{
    bool insale = true;
    const int price=(insale==true)?10:100; // -> insale의 price가 10이면 true인거고 100이면 false 인거임
    
    //
    if (insale)
        price = 10;
    else
        price = 100;
    // 
    cout << price << endl;
    return 0;
}*/
