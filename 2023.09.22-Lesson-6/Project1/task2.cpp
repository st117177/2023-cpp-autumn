#include <iostream>

void hanoi(int n, int from, int to)
{
    if (n <= 0)
    {
        return;
    }
    if (from + to == 4)//если это 1 и 3
    {
        hanoi(n, from, 2);
        hanoi(n, 2, to);
    }
    else
    {
        int res = 6 - from - to;
        hanoi(n - 1, from, res);
        printf("%d %d %d\n", n, from, to);
        hanoi(n - 1, res, to);
    }
}

int main(int argc, char* argv[])
{
    int n = 0;
    std::cin >> n;
    hanoi(n, 1, 3);

    return EXIT_SUCCESS;
}