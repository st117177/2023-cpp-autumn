#include <iostream>

int main(int argc, char* argv[])
{
    int size = 0;
    int min = 0;
    int max = 0;
    std::cin >> size;
    int* array = (int*)malloc(size * sizeof(int));
    for (int i = 0; i < size; i++)//ищем мин и макс
    {
        std::cin >> *(array + i); //=array[i]
        if (i == 0) {
            min = *(array + i);
            max = min;
        }
        if (*(array + i) < min) min = *(array + i);
        if (*(array + i) > max) max = *(array + i);
    }

    for (int i = 0; i < size; i++) {//замена мин на макс
        if (*(array + i) == min) {
            *(array + i) = max;
            break;
        }
    }

    for (int i = size - 1; i >= 0; i--)//замена макс на мин
    {
        if (*(array + i) == max) {
            *(array + i) = min;
            break;
        }
    }
    for (int i = 0; i < size; i++) {//вывод
        std::cout << *(array + i) << " ";
    }
    free(array);

    return EXIT_SUCCESS;
}