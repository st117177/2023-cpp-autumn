#include <iostream>

int main(int argc, char* argv[])
{
	int n = 0;
	std::cin >> n;
	int element = 0;
	for (int i = 1; i <= n; i++) {
		std::cin >> element;
		if (i % 2 == 0) std::cout << element << std::endl;
	}
	return EXIT_SUCCESS;
}