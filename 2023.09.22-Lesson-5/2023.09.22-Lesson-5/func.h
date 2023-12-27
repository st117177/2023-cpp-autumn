#pragma once

#ifndef FUNC_H
#define FUNC_H


void printMenu();
void printArray(int* array, int len);
void expandArray(int*& array, int& len);
void addElement(int*& array, int& len, int element);
void contractArray(int*& array, int& len);
bool indexValid(int index, int len);
int extractElement(int*& array, int& len, int index);
void sortArray(int*& array, int& len);
void reverseArray(int*& array, int& len);
void swapElements(int*& array, int len);
void removeDuplicates(int*& array, int& len);
void addRandomElements(int*& array, int& len, int n);

#endif