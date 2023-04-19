/*
float =4byte
double=8byte
long double =8,16byte


#include <iostream>
using namespace std;

int main()
{
    float f;
    double d;
    long double p;

    cout << sizeof(f) << endl; //4
    cout << sizeof(d) << endl; //8
    cout << sizeof(p) << endl; //8

}
*/

#include <iostream>
#include <iomanip> //시작할때 숫자를 어디까지 출력할건지 설정할 수 있게 하는 것
#include <limits>

using namespace std;

int main()
{
    float f(123456789.0f);
    cout << std::setprecision(16) << endl;//setprecison -> iomanip과 붙어다니는것으로 소수점 16자리까지 출력하라는 뜻
    cout << 1.0 / 3.0 << endl; //0.3333333333333333
    cout << std::setprecision(9) << endl;
    cout << f << endl; //123456792

    double d(0.1);
    cout << d << endl;//0.1
    cout << std::setprecision(17);
    cout << d << endl; //0.10000000000000001
}