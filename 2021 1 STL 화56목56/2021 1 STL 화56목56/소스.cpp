//----------------------------------------------------------------------------------
// ������ x86 release mode ���� ���α׷��Ѵ�..
//
// 2021. 1�б� STL ȭ56 ��56 - 3�� 25�� �����				(4�� 2��)
//
// �����̳ʴ� �ٸ� ��ü�� �����ϴ� ��ü�̴�.
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
	save("�ҽ�.cpp");
}