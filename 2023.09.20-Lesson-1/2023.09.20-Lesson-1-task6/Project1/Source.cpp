#include <iostream>

int main() {
    int a = 0;
    int b = 0;

    std::cin >> a;
    std::cin >> b;

    int result = (a + b + abs(a - b)) / 2;

    std::cout << result << std::endl;

    return EXIT_SUCCESS;
}