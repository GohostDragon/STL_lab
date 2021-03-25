//----------------------------------------------------------------------------------
// 앞으로 x86 release mode 에서 프로그램한다..
//
// 2021. 1학기 STL 화56 목56 - 3월 25일 목요일				(4주 2일)
//
// 컨테이너는 다른 객체를 저장하는 객체이다.
//----------------------------------------------------------------------------------

#include <iostream>
#include <vector>
#include <string>
#include <iterator>
#include <algorithm>
#include <fstream>
#include "save.h"
#include "String.h"
using namespace std;

int main()
{
	vector<vector <int> > v{ {1,2,3}, {4,5,6,7,8}, {100,200,300} };

	for (auto i = v.begin(); i != v.end(); ++i) {
		auto t = *i;
		for (auto ti = t.begin(); ti != t.end(); ++ti)
			cout << *ti << " ";
		cout << endl;
	}
	save("소스.cpp");
}