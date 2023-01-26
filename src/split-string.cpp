#include "split-string/split-string.hpp"	

#include <string>
#include <vector>


namespace string_split {

 	std::vector<std::string> split(const std::string &str,
								   const std::string &delim) {

		std::vector<std::string> tokens;

		std::string leftover = str;
		
		while (true) {
			int delim_pos = leftover.find(delim);
			if (delim_pos == std::string::npos) {
				tokens.push_back(leftover);
				break;
			}
			std::string next_token = leftover.substr(0, delim_pos);
			leftover = leftover.substr(delim_pos + delim.length());
			tokens.push_back(next_token);
		}

		return tokens;
	}
}
