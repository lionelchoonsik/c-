// 2.7문자형char type.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
using namespace std;

int main()
{
    char c1(65);
    char c2('A'); // 한글자를 표현할때는 '' 문장을 표현할때는""

    cout << c1 << " " << c2 << " " << int(c1) << " " << int(c2) << endl; //A A 65 65
    //변환하는법=cast
    cout << char(65) << endl;// 65->A
    cout << int('d') << endl; // 'd' -> 100
    //위랑 똑같은 과정..
    cout << static_cast<char>(65) << endl;
    cout << static_cast<char>('d') << endl;
}


