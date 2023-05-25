#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int height;

    // TODO: Prompt for pyramid height
    do
    {
        height = get_int("Height: ");
    }
    while (height < 1 || height > 8);

    // TODO: Print the pyramid
    for (int i = 1; i <= height; i++)
    {
        // TODO: Print the spaces
        for (int j = height; j > i; j--)
        {
            printf(" ");
        }

        // TODO: Print the hashes
        for (int j = 1; j <= i; j++)
        {
            printf("#");
        }

        printf("\n");
    }
}