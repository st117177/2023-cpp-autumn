#include <iostream>

int main() {
    int n = 0;
    std::cin >> n;

    int sign = (n > 0) - (n < 0);
    int abs_n = std::abs(n);

    int sum = (abs_n * (abs_n + 1) / 2) * sign;

    std::cout << sum << std::endl;

    return EXIT_SUCCESS;
}