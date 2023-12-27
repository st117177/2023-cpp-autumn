#include <iostream>

int n[4]{ 0 };
int** towers = new int* [4]
{ nullptr, new int[10], new int[10], new int[10] };

void shift(int from, int to)
{
    std::cout << towers[from][n[from] - 1] << " " << from << " " << to << std::endl;
    towers[to][n[to]++] = towers[from][--n[from]];
}

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
    HanoiSort();

    return EXIT_SUCCESS;
}