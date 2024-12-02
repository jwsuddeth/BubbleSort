// BubbleSort.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>

void bubbleSort(int data[], int size);
void swap(int& x, int& y);
void printArray(int data[], int size);


int main()
{
    int data[] = { 3, 8, 9, 2, 4, 7, 1 };

    printArray(data, sizeof(data) / sizeof(1));

    bubbleSort(data, sizeof(data) / sizeof(1));

    printArray(data, sizeof(data) / sizeof(1));

}


void bubbleSort(int data[], int size)
{
    for (int maxElement = size - 1; maxElement >= 0; maxElement--)
    {
        for (int index = 0; index <= maxElement - 1; index++)
        {
            if (data[index] > data[index + 1])
            {
                swap(data[index], data[index + 1]);
            }
        }
    }
}

void swap(int& x, int& y) 
{
    int temp = x;
    x = y;
    y = temp;
}

void printArray(int data[], int size) 
{
    for (int i = 0; i < size; i++) 
    {
        std::cout << data[i] << ", ";
    }
    std::cout << std::endl;
}
