#include <iostream>

using namespace std; //이거 쓰면 일일이 std안써도 됨

int main()
{
	int Money = 0; //int(선언), ( = 0; (초기화))*필수임
	Money = 100;

	float A = 1.0f; //실수 표현할때 쓰는것 f붙이는거 *필수

	char ch = 'a';  //Bayt "a"도 아스키코드이다. 출력될때 아스키코드(숫자)로 출력됨

	cout << (char)(ch) << endl; //"(char)"은 (ch)를 아스키코드(문자)로 출력하게 해줌


	return 0; //종료
}