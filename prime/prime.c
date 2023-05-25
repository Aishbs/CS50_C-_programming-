#include <cs50.h>
#include <stdio.h>

bool prime(int number);

int main(void)
{
    int min;
    do
    {
        min = get_int("Minimum: ");
    }
    while (min < 1);

    int max;
    do
    {
        max = get_int("Maximum: ");
    }
    while (min >= max);

    for (int i = min; i <= max; i++)
    {
        if (prime(i))
        {
            printf("%i\n", i);
        }
    }
}

bool prime(int number)
{
    // TODO
    int i;

    //Check whether number is negative
    if (number < 1)
    {
        return false;
    }
    
    else if (number == 1 || number == 2 || number == 3)
    {
        return true;
    }
    else
    {
        //Check whether number is prime or not
        for (i = 2; i <= number / 2; i++)
        {
            if (number % i == 0)
            {
                return false;
            }
        }
    }

    return true;
}
