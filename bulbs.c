#include <cs50.h>
#include <stdio.h>
#include <string.h>

const int BITS_IN_BYTE = 8;

void print_bulb(int bit);

int main(void)
{
    // Ask user for a message using get_string
    string message = get_string("Enter your message: ");

    // Convert this string (message) into a series of 8-bit binary numbers.
    for (int i = 0; i < strlen(message); i++)
    {
        unsigned char byte = message[i];
        int binary[BITS_IN_BYTE];
        int quotient = byte;
        int remainder;

        for (int j = 0; j < BITS_IN_BYTE; j++)
        {
            remainder = quotient % 2;
            binary[j] = remainder;
            quotient /= 2;
        }
        // Now use the print_bulb function to print a series of 0s and 1s as series of black and yellow emoji.
        for (int q = BITS_IN_BYTE - 1; q >= 0; q--)
        {
            print_bulb(binary[q]);
        }
        // Each 'byte' of 8 symbols should be on it's own line; there should be a \n after the last 'byte' of 8 symbols as well.
        printf("\n");
    }
}

void print_bulb(int bit)
{
    if (bit == 0)
    {
        // Dark emoji
        printf("\U000026AB");
    }
    else if (bit == 1)
    {
        // Light emoji
        printf("\U0001F7E1");
    }
}