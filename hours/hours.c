#include <cs50.h>
#include <ctype.h>
#include <stdio.h>

//TODO: Function to calculate total hours and average hours per week
float calc_hours(int hours[], int weeks, char output);

int main(void)
{
    // TODO: Prompt user for number of weeks
    int weeks = get_int("Number of weeks taking CS50: ");
    int hours[weeks];

    // TODO: Prompt user for number of hours
    for (int i = 0; i < weeks; i++)
    {
        hours[i] = get_int("Week %i HW Hours: ", i);
    }

    char output;
    // TODO: Prompt user for the desired type of output
    do
    {
        output = toupper(get_char("Enter T for total hours, A for average hours per week: "));
    }
    while (output != 'T' && output != 'A');

    // Print the output
    printf("%.1f hours\n", calc_hours(hours, weeks, output));
}

// TODO: complete the calc_hours function
float calc_hours(int hours[], int weeks, char output)
{
    float total = 0.0, avg;

    // TODO: Calculate total hours and average of hours per week
    for (int i = 0; i < weeks; i++)
    {
        total += hours[i];
        avg = total / weeks;
    }

    // TODO: return total hours
    if (output == 'T')
    {
        return total;
    }
    // TODO: return average of hours per week
    else
    {
        return avg;
    }

}