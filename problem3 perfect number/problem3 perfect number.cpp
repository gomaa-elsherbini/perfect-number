#include <iostream>
using namespace std;

enum enPerfect {Perfect, NotPerfect};

int readPositiveNumber(string msg)
{
    int num;
    do
    {
        cout << msg << endl;
        cin >> num;
    } while (num <= 0);
    return num;
}

int getSumAllDivisors(int num)
{
    int sum = 0;
    for (int i = 1; i <= round(num / 2); i++)
    {
        if (num % i == 0)
        {
            sum += i;
        }
    }
    return sum;
}

enPerfect checkPerfectNumber(int num)
{
    if (num == getSumAllDivisors(num))
        return enPerfect::Perfect;
    else
        return enPerfect::NotPerfect;
}

void printRes(int num)
{
    if (checkPerfectNumber( num)== enPerfect::Perfect)
    {
        cout << num << " is Perfect\n";
    }
    else
    {
        cout << num << " is Not Perfect\n";
    }
}

int main()
{
    printRes(readPositiveNumber("Please enter Number?"));
}