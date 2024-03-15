// chp1ex5.cpp
#include <iostream>
#include <string>

int main() {
	{
		std::string s = "a string";
		{
			std::string x = s + ", really";
			std::cout << s << std::endl;
		}
		std::string x = s + ", really";
		std::cout << x << std::endl;
	}
	return 0;
}