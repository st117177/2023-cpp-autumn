#include <iostream>

int main() {
    int a = 0;
    int b = 0;
    int c = 0;
    int d = 0;
    std:: cin >> a >> b >> c >> d;

    if (a == 0 && b == 0) {//����� ax+b=0 ������
        std::cout << "INF" << std::endl;
    }
    else if (a == 0) {
        std::cout << "NO" << std::endl;
    }
    else {
        if ((-b) % a == 0) {
            int x = (-b) / a;
            if (c * x + d != 0) {//�� �x+d!=0
                std::cout << x << std::endl;
            }
            else {
                std::cout << "NO" << std::endl;
            }
        }
        else {
            std::cout << "NO" << std::endl;
        }
    }

    return EXIT_SUCCESS;
}
