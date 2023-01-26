#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Get input from user that is between 1-8 with do while loop
    int input;
    do
    {
        input = get_int("Enter pyramid height between 1-8: ");
    }
    while (input <= 0 || input >= 9);

    // Use for loop to print height based on input:
    for (int height = 0; height < input; height++)
    {
        // Nested for loop to print spaces
        for (int space = input - height; space > 1; space--)
        {
            printf(" ");
        }
        // Nested for loop to print rows
        for (int row = -1; row < height; row++)
        {
            printf("#");
        }
        // New line
        printf("\n");
    }
}