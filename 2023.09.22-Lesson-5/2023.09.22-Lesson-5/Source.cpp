#include "func.h"

#include <iostream>
#include <ctime>

int main(int argc, char* argv[])
{
    int* array = nullptr;
    int len = 0;
    bool exit = false;

    while (!exit)
    {
        system("cls");
        printMenu();

        int choice = 0;
        std::cin >> choice;

        switch (choice)
        {
        case 0:
        {
            exit = true;
            break;
        }
        case 1:
        {
            printArray(array, len);
            system("pause");
            break;
        }
        case 2:
        {
            int element = 0;
            std::cout << "Input element to add: ";
            std::cin >> element;
            addElement(array, len, element);
            break;
        }
        case 3:
        {
            int index = 0;
            std::cout << "Input element index to delete: ";
            std::cin >> index;
            extractElement(array, len, index);
            break;
        }
        case 4:
        {
            sortArray(array, len);
            break;
        }
        case 5:
        {
            reverseArray(array, len);
            break;
        }
        case 6:
        {
            swapElements(array, len);
            break;
        }
        case 7:
        {
            removeDuplicates(array, len);
            break;
        }
        case 8:
        {
            int n = 0;
            std::cout << "Input n: ";
            std::cin >> n;
            addRandomElements(array, len, n);
            break;
        }
        default:
            std::cout << "unknown command." << std::endl;
            break;
        }
    }
    return EXIT_SUCCESS;
}