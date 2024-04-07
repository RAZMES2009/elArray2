#include <iostream>

void getResult(const short myArrSize, int (&myArr)[])
{

    std::cout << "ваш массив: ";
    for (short i = 0; i < myArrSize; i++)
        std::cout << myArr[i] << ' ';
    std::cout << '\n';

    int min = myArr[0], sum = 0;
    short indexMin;
    for (short i = 0; i < myArrSize; i++)
    {
        if (min >= myArr[i])
        {
            min = myArr[i];
            indexMin = i;
        }
    }

    for (short i = 0; i < myArrSize; i++)
    {
        sum += myArr[i];
    }

    myArr[indexMin] = sum / (myArrSize + 1);

    printf("минимальное начение a[%hi]=%i\n", indexMin+1, min);
    std::cout << "измененный массив: ";
    for (short i = 0; i < myArrSize; i++)
        std::cout << myArr[i] << ' ';
}