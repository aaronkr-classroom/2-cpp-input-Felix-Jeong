// chp0ex0.cpp
#include <iostream>
#include <string>

int main() {
	// �̸��� ����
	std::cout << "What's your name?\t";
	// �̸��� �о����
	std::string name; // ��������
	std::cin >> name;

	// ����Ϸ��� �޽��� ����
	const std::string greeting = "Hello, " + name + "!"; // + ���� ������

	// �λ縻�� �� ��° ��� �� ��° ��
	const std::string spaces(greeting.size(), ' '); //greetingũ���� �� ���� ����
	const std::string second = "* " + spaces + " *"; //spaces�¿�� �� ����

	// �λ縻�� ù ��° ��� �ټ� ��° ��
	const std::string first(second.size(), '*');

	// ��� ���
	std::cout << std::endl;
	std::cout << first << std::endl;
	std::cout << second << std::endl;
	std::cout << "* " << greeting << " *" << std::endl;
	std::cout << second << std::endl;
	std::cout << first << std::endl;

	return 0;
}