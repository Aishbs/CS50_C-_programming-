// Write a function to replace vowels with numbers
// Get practice with strings
// Get practice with command line
// Get practice with switch

#include <cs50.h>
#include <stdio.h>
#include <string.h>

//TODO: Function tho replace vowels with numbers
string replace(string input);

int main(int argc, string argv[])
{
    // TODO: Error message if there are more than 1 command-line input
    if (argc > 2)
    {
        printf("Only 1 input is permitted");
        return 1;
    }
    //TODO: Print the converted word
    string str = replace(argv[1]);
    printf("%s \n", str);
    return 0;
}

//TODO: Complete replace function
string replace(string input)
{
    char ch;
    int l = strlen(input), i = 0;
    char str[l];
    strcpy(str, input);
    string newstr = NULL;

    while (i < l)
    {
        ch = str[i];

        //TODO: Replace  the vowels using switch case
        switch (ch)
        {
            case 'a':
                str[i] = '6';
                break;
            case 'e':
                str[i] = '3';
                break;
            case 'i':
                str[i] = '1';
                break;
            case 'o':
                str[i] = '0';
                break;
            default:
                ;
        }
        i++;
    }
    printf("%s", str);
    strcpy(newstr, str);
    return newstr;
}