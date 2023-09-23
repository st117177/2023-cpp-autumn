#include <iostream>

int main() {
    int v, t;
    std::cin >> v >> t;

    int s = v * t;
    int result = 1 + (s % 109 + 109) % 109;

    std::cout << result << std::endl;

    return EXIT_SUCCESS;
}
