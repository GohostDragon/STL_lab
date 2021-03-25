#include <iostream>
#include <filesystem>
#include <fstream>
#include "save.h"

// google coding convention
void save(std::string_view fileName)
{
	// � ������ �����ϴ��� ȭ�鿡 ����Ѵ�. - �����̸��� ũ��
	std::cout << "����: " << fileName << ", ũ��: " << std::filesystem::file_size(fileName) << std::endl;

	std::ofstream out("2021 1�б� STL ȭ56��56 ��������.txt", std::ios::app);

	std::ifstream in(fileName); // ������ �д´�. <- ���������� ����� ������ �˾Ƽ� ���� ����

	using std::endl;

	out << endl << endl;

	// ������ ����� �ð��� ����.
	time_t t = time(nullptr);

	out.imbue(std::locale("korean"));

	out << "===============================================" << endl;
	out << "����ð� : " << std::put_time(localtime(&t), "%c %A") << endl;
	out << "===============================================" << endl;
	int c;
	while ((c = in.get()) != EOF)
		out.put(c);

	// RAII
}

// �ð� ��� �ڵ�
/*
using namespace std::chrono;

steady_clock::time_point b = steady_clock::now();		// �����ġ ����

this_thread::sleep_for(333ms);

auto d = steady_clock::now() - b;

cout << "����ð�(�и���) - " << duration_cast<milliseconds>(steady_clock::now() - b).count() << endl;
*/