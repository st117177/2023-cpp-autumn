#include <iostream>

int main(int argc, char* argv[]) {
    std::string n;
    std::cin >> n;
    int length = 0;
    length = size(n);
    while (length >= 0) {
        std::cout << n[length];
        length -= 1;
    }
    return EXIT_SUCCESS;
}