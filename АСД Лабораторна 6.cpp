#include <iostream>

using namespace std;

bool reversed(int number)
{
    int reversed = 0;
    while (number > 0)
    {
        reversed *= 10;
        reversed += number % 10;
        number /= 10;
    }
    if (reversed == number)
        return 1;
    else
        return 0;
}

bool prime(int number)
{
    int divider = 2;
    while (number % divider != 0)
        divider++;
    if (divider == number)
        return 1;
    else
        return 0;
}

void palindromic_primes(int min, int max, int amount)
{
    int number, i = 1;
    for (number = min; number <= max; number++)
    {
        if (i <= amount)
        {
            if (reversed(number) == 1 && prime(number) == 1)
            {
                cout << number << endl;
                i++;
            }
        }
    }
}

int main()
{
    int min, max, amount;

    cout << "min = ";
    cin >> min;
    cout << "max = ";
    cin >> max;
    cout << "amount = ";
    cin >> amount;

    palindromic_primes(min, max, amount);

    system("pause");
}