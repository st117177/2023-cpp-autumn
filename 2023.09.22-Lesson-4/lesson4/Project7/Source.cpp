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
            size_new += 1; //������ ������ ������ ������� ������ ������������� ��������
        }
    }
    int* array_new = (int*)malloc(size_new * sizeof(int));
    //��������� ����� ������������� ������
    int j = 0;
    for (int i = 0; i < size; i++)
    {
        //��������� j-��� ������� �������������� �������
        if (*(array + i) > 0) {
            *(array_new + j) = *(array + i);
            j++;
        }
    }
    //�����
    for (int i = 0; i < size_new; i++) {
        std::cout << *(array_new + i) << " ";
    }
    free(array);
    free(array_new);
    return EXIT_SUCCESS;
}