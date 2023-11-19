#include <iostream>
#include <cmath>

int main(int argc, char* argv[]) {
    int n = 0;
    std::cin >> n;
    int k = 0;
    while (log2(n) > k) {
        k += 1;
    }
    std::cout << k << std::endl;
    return EXIT_SUCCESS;
}
