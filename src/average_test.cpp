#include <iostream>
#include <cstdio>

/****************************************************************
 * print array
 * **************************************************************/
void printArr(int arrSize, float arr[])
{
    for(int i = 0; i < arrSize; i++)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << "\n";
}

/****************************************************************
 * push new value in array, and rmove oldest
 * **************************************************************/
void pushNew(int arrSize, float arr[], float newVal)
{
    for(int i = 0; i < arrSize - 1; i++)
    {
        arr[i] = arr[i+1];
    }
    arr[arrSize - 1] = newVal;
}

/****************************************************************
 * calculate array average
 * **************************************************************/
float avgArrFuc(int arrSize, float arr[])
{
    float sumArr = 0;
    float avgArr = 0;

    for(int i = 0; i < arrSize; i++)
    {
        sumArr += arr[i];
    }
    
    avgArr = sumArr / arrSize;
    return avgArr;
}

/****************************************************************
 * main
 * **************************************************************/
int main()
{
    int arrSize = 10;
    float arr[arrSize];

    for(int i = 0; i < arrSize; i++)
    {
        arr[i] = i;
    }

    printArr(arrSize, arr);

    pushNew(arrSize, arr, 87);
    
    printArr(arrSize, arr);

    float avgArr = avgArrFuc(arrSize, arr);
    std::cout << "avgArr: " << avgArr << "\n";
}