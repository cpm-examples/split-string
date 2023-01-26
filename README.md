# Split-string

A C++ library for splitting/tokenizing strings by a given delimiter

## Installation

```sh
cpm install https://github.com/cpm-examples/split-string
```

```cmake
add_subdirectory(lib/split-string)

target_include_directories(<target>
	PRIVATE
		${CMAKE_CURRENT_SOURCE_DIR}/lib/split-string/include
)

target_link_libraries(<target>
	PRIVATE
		split-string
)
```

## Example usage

```c++
// main.cpp

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
```

Output:

```sh
$ ./main
Inital string: hello/world/!/
Tokens:
hello
world
!
```
