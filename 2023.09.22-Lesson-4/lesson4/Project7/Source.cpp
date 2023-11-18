#include <iostream>

int main(int argc, char* argv[])
{
    int size = 0;
    int size_new = 0;
    std::cin >> size;
    int* array = (int*)malloc(size * sizeof(int));
    for (int i = 0; i < size; i++)
    {
        std::cin >> *(array + i); //=array[i]
        if (*(array + i) > 0) {
            size_new += 1; //узнаем размер нового массива считая положительные элементы
        }
    }
    int* array_new = (int*)malloc(size_new * sizeof(int));
    //заполняем новый положительный массив
    int j = 0;
    for (int i = 0; i < size; i++)
    {
        //заполняем j-тый элемент положительного массива
        if (*(array + i) > 0) {
            *(array_new + j) = *(array + i);
            j++;
        }
    }
    //вывод
    for (int i = 0; i < size_new; i++) {
        std::cout << *(array_new + i) << " ";
    }
    free(array);
    free(array_new);
    return EXIT_SUCCESS;
}