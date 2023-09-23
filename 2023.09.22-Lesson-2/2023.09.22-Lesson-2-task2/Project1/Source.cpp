#include <iostream>

int main() {
    int correctAnswer = 0;
    int studentAnswer = 0;
    std::cin >> correctAnswer;
    std::cin >> studentAnswer;

    if (correctAnswer == 1) {
        if (studentAnswer == 1) {
            std::cout << "YES" << std::endl;
        }
        else {
            std::cout << "NO" << std::endl;
        }
    }
    else {
        if (studentAnswer != 1) {
            std::cout << "YES" << std::endl;
        }
        else {
            std::cout << "NO" << std::endl;
        }
    }

    return EXIT_SUCCESS;
}