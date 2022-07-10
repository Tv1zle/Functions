
#include <iostream>


void ShowLine(int num, char sym, bool horver)
{
    if (horver == true)
    {
        std::cout << sym;
    }
    else if (horver == false)
    {
        std::cout << sym << "\n";
    }


    if (num > 0)
    {
        num--;
        ShowLine(num, sym, horver);
    }
}


long int Cube(int number)
{
    return number * number * number;
}


std::string IsPrime(int prime)
{
    for (int sanya = 2; sanya < 10; sanya++)
    {
        if (prime != sanya)
        {
            if (prime % sanya == 0)
            {
                return "\n\nFALSE";
            }
        }
    }
    return "\n\nTRUE";

}


int main()
{
    ShowLine(20, '@', true);
    std::cout << "\n\n" << Cube(5);
    std::cout << IsPrime(17);
}