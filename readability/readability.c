#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

// Function to count letters
int count_letters(string text);
// Function to count words
int count_words(string text);
// Function to count sentences
int count_sentences(string text);

int main(void)
{
    //Prompt user for text
    string text;
    printf("Text: ");
    scanf("%s", text);
    int letter, word, sent;
    float L, S, index;

    // Calling counting functions
    letter = count_letters(text);
    word = count_words(text) + 1;
    sent = count_sentences(text);

    //Calculate number of letters per 100 words
    L = 100.000 * letter / word ;
    //Calculate number of sentences per 100 words
    S = 100.000 * sent / word;

    //Calculate grade
    index = Round(0.0588 * L - 0.296 * S - 15.8);
    if (index < 1)
    {
        printf("Before Grade 1\n");
    }
    if (index > 1 && index < 16)
    {
        printf("Grade %i \n",(int)(index));
    }
    if (index >= 16)
    {
        printf("Grade 16+\n");
    }
}

// Function to count letters
int count_letters(string text)
{
    int letter = 0;
    for (int i = 0; i < strlen(text); i ++)
    {
        //Count number of letters
        if (isalpha(text[i]))
        {
            letter+=1;

        }
    }
    return letter;
}

// Function to count words
int count_words(string text)
{
    int word = 0;
    for (int i = 0; i < strlen(text); i ++)
    {
        //Count number of words
        if (isblank(text[i]) || text[i] == '.' || text[i] == '?' || text[i] == '!')
        {
            word +=1;

        }
    }
    return word;
}

// Function to count sentences
int count_sentences(string text)
{
    int sent = 0;
    for (int i = 0; i < strlen(text); i ++)
    {
        //Count number of sentences
        if (text[i] == '.' || text[i] == '?' || text[i] == '!')
        {
            sent+=1;

        }
    }
    return sent;
}
