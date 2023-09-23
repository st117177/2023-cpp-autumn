#include <iostream>

int main() {
    int N;
    std::cin >> N;

    if ((N == 1) || ((N%10==1) and (N!=11))) {
        std::cout << N << " bochka" << std::endl;
    }
    else if ((N >= 2 && N <= 4) || ((N % 10 >= 2 && N % 10 <= 4) and (N>14))) {
        std::cout << N << " bochki" << std::endl;
    }
    else {
        std::cout << N << " bochek" << std::endl;
    }

    return EXIT_SUCCESS;
}
