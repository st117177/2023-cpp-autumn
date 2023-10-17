#include <iostream>

bool isPalindrome(int num) {
    int originalNum = num;
    int reversedNum = 0;

    while (num > 0) {
        int digit = num % 10;
        reversedNum = reversedNum * 10 + digit;
        num /= 10;
    }

    return originalNum == reversedNum;
}

int main() {
    int K = 0;
    std::cin >> K;

    int count = 0;

    for (int i = 1; i <= K; i++) {
        if (isPalindrome(i)) {
            count++;
        }
    }

    std::cout << count << std::endl;

    return EXIT_SUCCESS;
}
