#include <iostream>

int main(int argc, char* argv[])
{
    int size = 0;
    std::cin >> size;
    int* array = (int*)malloc(size * sizeof(int));
    for (int i = 0; i < size; i++)
    {
        std::cin >> *(array + i); //=array[i]
    }
    for (int i = size - 1; i >= 0; i--)
    {
        std::cout << *(array + i) << " ";
    }
    free(array);

    return EXIT_SUCCESS;
}