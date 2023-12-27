#include "func.h"

#include <iostream>

void printMenu()
{
    std::cout << "0 - Exit" << std::endl;
    std::cout << "1 - Print array" << std::endl;
    std::cout << "2 - Append element to array" << std::endl;
    std::cout << "3 - Extract element from array" << std::endl;
    std::cout << "4 - Sort array in ascending order" << std::endl;
    std::cout << "5 - Reverse array" << std::endl;
    std::cout << "6 - Swap the first maximum and last minimum element" << std::endl;
    std::cout << "7 - Remove all duplicates" << std::endl;
    std::cout << "8 - Append n random elements" << std::endl;
}

void printArray(int* array, int len)
{
    if (array == nullptr)
    {
        std::cout << "EMPTY";
    }
    else
    {
        for (int i = 0; i < len; ++i)
        {
            std::cout << array[i] << " ";
        }
    }
    std::cout << std::endl;
}

void expandArray(int*& array, int& len)
{
    int* newArray = new int[len + 1]{ 0 };
    if (array != nullptr)
    {
        for (int i = 0; i < len; ++i)
        {
            newArray[i] = array[i];
        }
        delete[] array;
    }
    array = newArray;
    ++len;
}

void addElement(int*& array, int& len, int element)
{
    expandArray(array, len);
    array[len - 1] = element;
}

void contractArray(int*& array, int& len)
{
    if (array != nullptr)
    {
        int* newArray = new int[len - 1];
        for (int i = 0; i < len - 1; ++i)
        {
            newArray[i] = array[i];
        }
        delete[] array;
        array = newArray;
        --len;
    }
}

bool indexValid(int index, int len)
{
    return (index >= 0 && index < len);
}

int extractElement(int*& array, int& len, int index)
{
    int res = -1;
    if (indexValid(index, len))
    {
        res = array[index];
        for (int i = index; i < len - 1; ++i)
        {
            array[i] = array[i + 1];
        }
        contractArray(array, len);
    }
    return res;
}

void sortArray(int*& array, int& len)
{
    if (array == nullptr)
    {
        std::cout << "EMPTY" << std::endl;
    }
    else
    {
        int i = 0;
        int j = 0;
        int key = 0;

        for (i = 1; i < len; ++i)
        {
            key = (array)[i];
            j = i - 1;

            while (j >= 0 && (array)[j] > key)
            {
                (array)[j + 1] = (array)[j];
                j = j - 1;
            }

            (array)[j + 1] = key;
        }
    }
}

void reverseArray(int*& array, int& len)
{
    if (array == nullptr)
    {
        std::cout << "EMPTY" << std::endl;
    }
    else
    {
        int* newArray = new int[len] {0};

        for (int i = 0; i < len; ++i)
        {
            newArray[i] = array[len - i - 1];
        }
        delete[] array;
        array = newArray;
    }
}

void swapElements(int*& array, int len)
{
    if (array == nullptr)
    {
        std::cout << "EMPTY" << std::endl;
    }
    else
    {
        int maxInt = array[0];
        int minInt = array[0];
        int maxInd = 0;
        int minInd = 0;

        for (int i = 0; i < len; i++)
        {
            if (maxInt < array[i])
            {
                maxInt = array[i];
                maxInd = i;
            }
            if (minInt >= array[i])
            {
                minInt = array[i];
                minInd = i;
            }
        }
        array[maxInd] = minInt;
        array[minInd] = maxInt;
    }
}

void removeDuplicates(int*& array, int& len)
{
    if (array == nullptr)
    {
        std::cout << "EMPTY" << std::endl;
    }
    else
    {
        int* newArray = nullptr;
        int count = 0;
        int lenNewArray = 0;
        for (int i = 0; i < len; ++i)
        {
            count = 0;
            for (int j = 0; j < lenNewArray; ++j)
            {
                if (array[i] == newArray[j])
                {
                    ++count;
                }
            }

            if (count == 0)
            {
                addElement(newArray, lenNewArray, array[i]);
            }
        }
        delete[] array;
        array = newArray;
        len = lenNewArray;
    }
}

void addRandomElements(int*& array, int& len, int n)
{
    srand(time(0));

    for (int i = 0; i < n; i++)
    {
        int randomElement = rand() % (1000 - (-1000) + 1) - 1000;
        addElement(array, len, randomElement);
    }
}