#ifndef STRING_SPLIT_H
#define STRING_SPLIT_H

#include <string>
#include <vector>


namespace string_split {

	/**
	 * @brief Split the specified string into tokens by the given delimeter
	 * 
	 * @return A list of tokens
	 */
	std::vector<std::string> split(const std::string &str,
								   const std::string &delim);
}

#endif	// STRING_SPLIT_H
