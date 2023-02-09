#include <cs50.h>
#include <stdio.h>
#include <string.h>

int count_letters(string input);
int count_words(string text);

int main(void)
{
    string userInput = get_string("Enter a sentence: ");
    string letters = " letters";
    string words = " words";
    printf("%s\n", userInput);
    int userInputLength = count_letters(userInput);
    printf("%i", userInputLength);
    printf("%s\n", letters);
    int wordsLength = count_words(userInput);
    printf("%i", wordsLength);
    printf("%s\n", words);
}

int count_letters(string input)
{
    int textLength = strlen(input);
    return textLength;
}

int count_words(string text)
{
    int amountOfWords = 1;
    for (int i = 0; text[i] != '\0'; i++)
    {
        if (text[i] == ' ' && text[i+1] != ' ')
        amountOfWords++;
    }
    return amountOfWords;
}