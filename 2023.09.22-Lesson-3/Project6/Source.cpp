#include <iostream>

int main(int argc, char* argv[]) {
    int n = 0;
    std::cin >> n;

    int fib0 = 0;
    int fib1 = 1;
    int current = 0;

    if (n == 0) {
        current = fib0;
    }
    else if (n == 1) {
        current = fib1;
    }
    else {
        int i = 2;
        while (i <= n) {
            current = fib0 + fib1;
            fib0 = fib1;
            fib1 = current;
            i++;
        }
    }

    std::cout << current << std::endl;
    return EXIT_SUCCESS;
}
