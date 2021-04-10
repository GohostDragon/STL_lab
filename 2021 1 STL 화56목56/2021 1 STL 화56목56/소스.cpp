//----------------------------------------------------------------------------------
// ������ x86 release mode ���� ���α׷��Ѵ�..
//
// 2021. 1�б� STL ȭ56 ��56 - 4�� 8�� ȭ����				(6�� 2��)
//
// deque
// 
// �߰����� - 4�� 22�� (�����) (8�� 2��)
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

	// �߰��� "middle"�� �߰�����

	d.emplace(d.end(), "3");

	cout << "�߰��� �� ���" << endl;
	for (const String& s : d)
		cout << s << endl;

	save("�ҽ�.cpp");
}