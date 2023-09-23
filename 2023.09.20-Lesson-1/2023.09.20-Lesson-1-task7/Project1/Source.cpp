#include <iostream>

int main() {
    int number;
    std::cin >> number;

    std::cout << "The next number for the number " << number << " is " << number+1 << "." << std::endl;
    std::cout << "The previous number for the number " << number << " is " << number-1 << "." << std::endl;

    return EXIT_SUCCESS;
}
