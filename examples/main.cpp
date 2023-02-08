#include "split-string/split-string.hpp"

#include <cstdlib>

#include <iostream>
#include <string>
#include <vector>


int main() {

	std::string str = "hello/world/!";
	std::cout << "Inital string: " << str << "\n";
	
	auto tokens = string_split::split(str, "/");	
	std::cout << "Tokens:\n";
	for (auto t : tokens) {
		std::cout << t << "\n";
	}

	return EXIT_SUCCESS;
}
