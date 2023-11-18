#include <iostream>

int main(int argc, char* argv[])
{
	int n = 0;
	std::cin >> n;
	int element = 0;
	int max = 0;
	for (int i = 1; i <= n; i++) {
		std::cin >> element;
		if (i == 1) max = element;
		else if (element > max) max = element;
	}
	std::cout << max << std::endl;
	return EXIT_SUCCESS;
}