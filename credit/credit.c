#include <cs50.h>
#include <stdio.h>
#include <string.h>


//Function to check sum condition
void checksum(long card_num);
// function to return type of card
void card_type(int i, int rem, int start_dig);

int main(void)
{
    long card_num = 0;

    // TODO: Prompt user for credit card number
    do
    {
        card_num = get_long("Number: ");
    }
    while (!card_num);

    //TODO: Function to testify for checksum conditon
    checksum(card_num);
    return 0;
}

// Function to check validity
void checksum(long card_num)
{
    int product = 1, sum = 0, i = 0, rem = 0, start_dig = 0;

    // TODO: Find the sum of all digits
    while (card_num != 0)
    {
        i += 1;
        rem = card_num % 10;
        card_num /= 10;

        // TODO: Find the sum of products of 2
        if (i % 2 == 0)
        {
            product = 2 * rem;
            if (product > 9)
            {
                product -= 9;
            }
            sum += product;
        }
        // TODO: Add the remaining digits to the sum
        else
        {
            sum += rem;
        }
        if (card_num > 10 && card_num < 100)
        {
            start_dig = card_num % 100;
        }

    }

    if (sum % 10 == 0)
    {
        card_type(i, rem, start_dig);
    }
    else
    {
        printf("INVALID\n");
    }

    return ;
}

// TODO: Print the type of card
void card_type(int i, int rem, int start_dig)
{
    // TODO: Chech whether number is valid or not
    if (i == 15 && rem == 3)
    {
        if (start_dig == 34 || start_dig == 37)
        {
            printf("AMEX\n");
        }
        else
        {
            printf("INVALID\n");
        }
    }
    else if (i == 16 && rem == 5)
    {
        if (start_dig == 51 || start_dig == 52 || start_dig == 53 || start_dig == 54 || start_dig == 55)
        {
            printf("MASTERCARD\n");
        }

        else
        {
            printf("INVALID\n");
        }
    }
    else if ((i == 13 || i == 16) && rem == 4)
    {
        printf("VISA\n");
    }
    else
    {
        printf("INVALID \n");
    }

}