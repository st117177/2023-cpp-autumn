#include <iostream>

// Массив n содержит количество дисков на каждом стержне,
// а массив towers хранит сами диски, где towers[0] - пустой стержень.
int n[4]{ 0 };
int** towers = new int* [4]
{ nullptr, new int[10], new int[10], new int[10] };

// Функция shift перекладывает диск с одного стержня на другой.
void shift(int from, int to)
{
    std::cout << towers[from][n[from] - 1] << " " << from << " " << to << std::endl;
    towers[to][n[to]++] = towers[from][--n[from]];
}

// Рекурсивная функция для решения Ханойской башни.
// Перекладывает диски с одного стержня на другой с использованием промежуточного стержня.
void hanoi(int count, int from, int to)
{
    if (count == 0)
    {
        return;
    }

    int res = 6 - from - to;

    hanoi(count - 1, from, res);
    shift(from, to);
    hanoi(count - 1, res, to);
}


void swap(int& a, int& b)
{
    int temp = a;
    a = b;
    b = temp;
}

// Возвращает верхний диск на стержне a, если он существует, иначе возвращает 11.
int top(int a)
{
    if (n[a] > 0)
    {
        return towers[a][n[a] - 1];
    }
    else
    {
        return 11;
    }
}

// Сортировка дисков на стержнях таким образом, чтобы они оказались на одном стержне в порядке возрастания.
void HanoiSort(int a = 1)
{
    int b = 0;
    a == 3 ? b = 2 : b = a + 1;
    int c = 6 - a - b;

    while (n[a] > 0)
    {
        int t = top(a);
        while (top(c) < t)
        {
            int temp = 0;
            for (int i = 0; i < n[b]; ++i)
            {
                if (towers[b][i] > top(c))
                {
                    temp++;
                }
            }
            hanoi(n[b] - temp, b, c);
            swap(b, c);
        }
        shift(a, c);
    }
    while (n[c] > 0)
    {
        int temp = 0;
        for (int i = 0; i < n[b]; ++i)
        {
            if (towers[b][i] > top(c))
            {
                temp++;
            }
        }
        hanoi(n[b] - temp, b, c);
        swap(b, c);
    }
}

// Функция для вывода состояния Ханойской башни.
void printHanoi(int** towers, int* n)
{
    for (int i = 9; i >= 0; --i)
    {
        for (int j = 1; j < 4; j++)
        {
            if (i < n[j])
            {
                std::cout << towers[j][i];
            }
            std::cout << "\t";
        }
        std::cout << std::endl;
    }
}

int main(int argc, char* argv[])
{
    std::cin >> n[1];
    for (int i = n[1] - 1; i >= 0; --i)
    {
        std::cin >> towers[1][i];
    }
    HanoiSort(); // Вызов функции для перестановки дисков.

    return EXIT_SUCCESS;
}
