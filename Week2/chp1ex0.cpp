// chp0ex0.cpp
#include <iostream>
#include <string>

int main() {
	// 이름을 물음
	std::cout << "What's your name?\t";
	// 이름을 읽어들임
	std::string name; // 변수설정
	std::cin >> name;

	// 출력하려는 메시지 구성
	const std::string greeting = "Hello, " + name + "!"; // + 결합 연산자

	// 인사말의 두 번째 행과 네 번째 행
	const std::string spaces(greeting.size(), ' '); //greeting크기의 빈 공간 만듬
	const std::string second = "* " + spaces + " *"; //spaces좌우로 별 만듬

	// 인사말의 첫 번째 행과 다섯 번째 행
	const std::string first(second.size(), '*');

	// 모두 출력
	std::cout << std::endl;
	std::cout << first << std::endl;
	std::cout << second << std::endl;
	std::cout << "* " << greeting << " *" << std::endl;
	std::cout << second << std::endl;
	std::cout << first << std::endl;

	return 0;
}