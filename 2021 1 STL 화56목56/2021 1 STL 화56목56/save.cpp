#include <iostream>
#include <filesystem>
#include <fstream>
#include "save.h"

// google coding convention
void save(std::string_view fileName)
{
	// 어떤 파일을 저장하는지 화면에 출력한다. - 파일이름과 크기
	std::cout << "저장: " << fileName << ", 크기: " << std::filesystem::file_size(fileName) << std::endl;

	std::ofstream out("2021 1학기 STL 화56목56 강의저장.txt", std::ios::app);

	std::ifstream in(fileName); // 파일을 읽는다. <- 지역변수라 블록을 나가면 알아서 삭제 해줌

	using std::endl;

	out << endl << endl;

	// 파일을 기록한 시간도 쓴다.
	time_t t = time(nullptr);

	out.imbue(std::locale("korean"));

	out << "===============================================" << endl;
	out << "저장시간 : " << std::put_time(localtime(&t), "%c %A") << endl;
	out << "===============================================" << endl;
	int c;
	while ((c = in.get()) != EOF)
		out.put(c);

	// RAII
}

// 시간 재는 코드
/*
using namespace std::chrono;

steady_clock::time_point b = steady_clock::now();		// 스톱워치 시작

this_thread::sleep_for(333ms);

auto d = steady_clock::now() - b;

cout << "경과시간(밀리초) - " << duration_cast<milliseconds>(steady_clock::now() - b).count() << endl;
*/