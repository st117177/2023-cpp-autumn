#include <iostream>

int main(int argc, char* argv[])
{
    int a = 0;
    int b = 0;
    int n = 0;
    int rem = 0; //остаток воды
    int gcd = 0; //НОД
    char a_name = 'A';
    char b_name = 'B';

    std::cin >> a;
    std::cin >> b;
    std::cin >> n;

    int a1 = a; //копии объемов сосудов для вычислений
    int b1 = b;

    //если первый сосуд больше второго меняем местами
    if (a > b)
    {
        gcd = a;
        a = b;
        b = gcd;
        a_name = 'B';
        b_name = 'A';
    }

    if (n == b)
    {
        std::cout << ">" << b_name;
        return 0;
    }

    //находим НОД алгоритмом евклида
    while (b1 != 0)
    {
        gcd = a1 % b1;
        a1 = b1;
        b1 = gcd;
    }

    //проверяем возможность решения задачи
    if ((n % a1 != 0) || ((n > a) && (n > b)))//n должен делиться на НОД и быть <= хотя бы одного из сосудов
    {
        std::cout << "Impossible" << std::endl;
    }
    else
    {
        //решаем задачу
        while (1)
        {
            rem += a; //наполняем меньший сосуд
            std::cout << ">" << a_name << std::endl;
            std::cout << a_name << ">" << b_name << std::endl; //переливаем из меньшего в больший
            if (rem >= b)
            {
                std::cout << b_name << ">" << std::endl; //если второй сосуд полон, опустошаем его
                std::cout << a_name << ">" << b_name << std::endl; //переливаем из первого во второй сосуд
                rem %= b; //обновляем остаток воды
            }
            if ((rem == n) || (rem == 0))
            {
                break; //если достигнут требуемый объем или сосуды опустошены, заканчиваем цикл
            }
        }
    }
    return EXIT_SUCCESS;
}