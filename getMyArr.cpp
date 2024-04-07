#include <iostream>
#include <string>

int getMyArr()
{
    start:
    std::string inputString;
    std::cin >> inputString;
    try
    {
        bool minusFlag = false;
        for (int j = 0; j < inputString.size(); j++)
        {
            if (inputString[0] == '-' && !minusFlag)
            {
                minusFlag = true;
                continue;
            }
            if (!isdigit(inputString[j]))
                throw std::runtime_error("kek");
        }
        return stod(inputString);
    }
    catch (...)
    {
        std::cout << "Введено некорректное значение, повторите попытку" << std::endl;
        goto start;
    }
}