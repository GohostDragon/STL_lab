#pragma once

#include <iostream>
#include <random>
#include <algorithm>

std::mt19937 dre;
std::uniform_int_distribution<> uid{ 'a', 'z' };
std::uniform_int_distribution<> uidLen{ 1, 200 };

// �ؿ� �ٿ� �ּ��� �����ϸ� ��¸޽��� �� ����
//#define ����


class String {
public:
	String() : num{ uidLen(dre) }, p{ new char[num] } {
#ifdef ����
		std::cout << "String() - ctor" << std::endl;
#endif
		for (int i = 0; i < num; ++i)
			p[i] = uid(dre);
	}

	String(int num) : num{ num }, p{ new char[num] } {
#ifdef ����
		std::cout << "String(int)" << std::endl;
#endif
		for (int i = 0; i < num; ++i)
			p[i] = uid(dre);
	}

	~String() {
#ifdef ����
		std::cout << "~String() - p:" << (void*)p <<std::endl;
#endif
		delete[] p;
	}

	String(const String& other) : num{ other.num }, p{ new char[num] } {
		// cout << "����";		// swithch�� ��� ����
		memcpy(p, other.p, num);
	}

	String& operator = (const String& other) {
		// cout << "�Ҵ�";
		if (this != &other) {
			delete[] p;
			num = other.num;
			p = new char[num];
			memcpy(p, other.p, num);
		}
		return *this;
	}

	size_t size() const {
		return num;
	}

	void String::sortAscending() {
		std::sort(p, p + num);
	}

private:
	int num{ 0 };
	char* p{ nullptr };


	friend std::ostream& operator<<(std::ostream& os, const String&);
};

std::ostream& operator<<(std::ostream& os, const String& s)
{
	for (int i = 0; i < s.num; ++i)
		os << s.p[i];
	return os;
}