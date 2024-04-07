#include <iostream>

#include "getMyArr.h"
#include "getResult.h"

using namespace std;

int main()
{
    const short myArrSize = 20;
    int myArr[myArrSize];
    char choice;

    while (1)
    {
        cout << "создать массив автоматически? (y/n)" << endl;
        cin >> choice;

        if (choice == 'y')
        {
            srand(time(0));
            for (int i = 0; i < myArrSize; i++)
                myArr[i] = rand() % 200 + (-100);
            break;
        }
        else if (choice == 'n')
        {
            cout << "Введите целое число последовательности a1..a20" << endl;
            for (short i = 0; i < myArrSize; i++)
            {
                cout << 'a' << i + 1 << " ";
                myArr[i] = getMyArr();
            }
            break;
        }
    }
    getResult(myArrSize, myArr);
}
