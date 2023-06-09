#include <iostream>
#include <string>

#include "example/example.hpp"

int main(int argc, char* argv[]) {

	std::string input;

	for (;;) {
		std::cout << ">>";
		std::cin >> input;

		if (input == "exit") {
			break;
		} else if (input == "test") {
			example::print_test();
		} else {
			std::cout << "command not found" << std::endl;
		}

	}

	return 0;
}