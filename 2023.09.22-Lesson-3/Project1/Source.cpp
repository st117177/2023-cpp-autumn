#include <iostream>

int main(int argc, char* argv[]) {
    int n = 0;
    int times = 0; //���������� ���������� ����� �� ������ �����
    std::cin >> n;
    int step = 1;//������ ���������� ���������� ����� �� ������ �����
    while (step <= n) {
        while (times < step) {
            std::cout << step << " ";
            times += 1;
        }
        step += 1;
        times = 0;
    }
    return EXIT_SUCCESS;
}