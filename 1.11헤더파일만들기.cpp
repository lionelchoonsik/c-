﻿/*
헤더 만드는 이유 내가 예쩐에 어떤 코드를 만들어놨는데 그 코드가 ㅈㄴ유용한데 개복잡함.
그 코드를 쓸 때마다 일일히 복붙 or 다시 작성하는건 개오바임 그럴때 헤더 파일로 저장해놨다가 쓸 일이 생기면 #include"파일이름" 선언해줌 
*/
#include <iostream>
#include"add.h" // 위에껀 왜 <> 이건 h 인가여...? iostream은 ㅈㄴ특별한놈이기 때문...

using namespace std;

int main()
{
    cout << add(1, 2) << endl;
} // 이거보셈 add 선언안했는데도 멀쩡히 돌아가는건 헤더파일을 선언했기 때문 
// 헤더파일 만드는법 : 오른쪽 솔루션탐색기-> 헤더파일 마우스 오른쪽 클릭-> 추가 -> 새항목
