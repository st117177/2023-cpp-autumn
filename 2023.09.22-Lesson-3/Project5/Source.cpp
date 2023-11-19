#include <iostream>

int main(int argc, char* argv[]) {
    int K = 0;
    std::cin >> K;
    int count = 0;
    for (int i = 1; i <= K; i++) {
        int originalNum = i;//we will use it for creating reversedNum while not touching i
        int reversedNum = 0;
        //creating reversedNum
        while (originalNum > 0) {
            int digit = originalNum % 10;
            reversedNum = reversedNum * 10 + digit;
            originalNum /= 10;
        }
        if (i == reversedNum) {
            count++;
        }
    }

    std::cout << count << std::endl;

    return EXIT_SUCCESS;
}
