//----------------------------------------------------------------------------------
// 앞으로 x86 release mode 에서 프로그램한다..
//
// 2021. 1학기 STL 화56 목56 - 4월 8일 화요일				(6주 2일)
//
// deque
// 
// 중간시험 - 4월 22일 (목요일) (8주 2일)
//----------------------------------------------------------------------------------
#include <iostream>
#include <deque>
#include <algorithm>
#include "save.h"
#include "String.h"
using namespace std;



int main()
{
	deque<String> d;

	d.emplace(d.end(), "1");
	d.emplace(d.end(), "2");

	for (const String& s : d)
		cout << s << endl;

	// 중간에 "middle"을 추가하자

	d.emplace(d.end(), "3");

	cout << "추가한 후 출력" << endl;
	for (const String& s : d)
		cout << s << endl;

	save("소스.cpp");
}