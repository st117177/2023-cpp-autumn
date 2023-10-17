#include <iostream>
#include <math.h>
int main() {
    int x = 0;
    int k = 0;//количество делителей
    std::cin >> x;
    for (int i=1; i <= x; i++) {
        if (x % i == 0) k += 1;
    }
    std::cout << k << std::endl;
    return EXIT_SUCCESS;
}