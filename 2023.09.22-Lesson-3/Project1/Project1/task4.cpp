#include <iostream>
#include <math.h>
int main() {
    int a = 0;
    int b = 0;
    int c = 0;
    int d = 0;
    std::cin >> a >> b >> c >> d;
    for (int x = 0; x <= 1000; x++) {
        if (a * pow(x, 3) + b * pow(x, 2) + c * x + d == 0) std::cout << x << " ";
    }
    std::cout << std::endl;
    return EXIT_SUCCESS;
}