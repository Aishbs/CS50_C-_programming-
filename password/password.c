// Check that a password has at least one lowercase letter, uppercase letter, number and symbol
// Practice iterating through a string
// Practice using the ctype library

#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

// Function to check that a password has at least one lowercase letter, uppercase letter, number and symbol
bool valid(string password);

int main(void)
{
    string password = get_string("Enter your password: ");
    //Print to validity of password
    if (valid(password))
    {
        printf("Your password is valid!\n");
    }
    else
    {
        printf("Your password needs at least one uppercase letter, lowercase letter, number and symbol\n");
    }
}

// TODO: Complete the Boolean function below
bool valid(string password)
{
    int u = 0, l = 0, d = 0, s = 0, i = 0;
    char ch;

    while (i < strlen(password))
    {
        ch = password[i];
        // Check that a password has at least one uppercase letter
        if (isupper(ch))
        {
            u += 1;
        }
        // Check that a password has at least one lowercase letter
        if (islower(ch))
        {
            l += 1;
        }
        // Check that a password has at least one number
        if (isdigit(ch))
        {
            d += 1;
        }
        // Check that a password has at least one symbol
        if (ispunct(ch))
        {
            s += 1;
        }
        i++;
    }

    if( s > 0 && u > 0 && l > 0 && d > 0)
    {
        return true;
    }
    return false;
}
