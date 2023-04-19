// 1.14 전처리기 (define).cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
using namespace std;

#define MYNUMBER 9 //메크로 : 대문자로 쓰는게 특징임
#define MYSOONMU "SOONMU" // 이렇게 매크로는 문자도 가능
#define MAX(a,b) ((a>b) ? a : b) // a>b 가 참이면 a 가 나오고 a<b가 거짓이면 b 가 나옴, 즉= a랑 b중에 더 큰 숫자가 나옴 ()로 싸매야 에러 안뜸
#define LIKEAPPLE

int main()
{
    
    cout << MYNUMBER << endl; // define 한 매크로의 값 9가 나옴
    cout << MYSOONMU << endl; //순무가 나옴
    cout << MAX(1,2) << endl; //2가 나옴

}

