#include <iostream>
int main() {
    int a = 0;
    int b = 0;
    int n = 0;
    std::cin >> a >> b >> n;
    while (a > b) {
        if ((a % 2 == 0) & (a / 2 > b)) {
            a = a / 2;
            std::cout << ":2" << std::endl;
        }
        else {
            a -= 1;
            std::cout << "-1" << std::endl;
        }
    }
    return EXIT_SUCCESS;
}
