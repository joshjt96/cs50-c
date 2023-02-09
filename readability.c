#include <cs50.h>
#include <stdio.h>
#include <string.h>

int count_letters(string input);

int main(void)
{
    string userInput = get_string("Enter a sentence: ");
    string letters = " letters";
    printf("%s\n", userInput);
    int userInputLength = count_letters(userInput);
    printf("%i", userInputLength);
    printf("%s\n", letters);

}

int count_letters(string input)
{
    int textLength = strlen(input);
    return textLength;
}