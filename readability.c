#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>


int count_letters(string input);
int count_words(string text);

int main(void)
{
    string userInput = get_string("Enter a sentence: ");
    string letters = " letters";
    string letter = " letter";
    string words = " words";
    string word = " word";
    int userInputLength = count_letters(userInput);
    int wordsLength = count_words(userInput);
    
    printf("%s\n", userInput);
    printf("%i", userInputLength);

    if (userInputLength == 1)
    {
        printf("%s\n", letter);
    }
    else
    {
        printf("%s\n", letters);
    }

    printf("%i", wordsLength);

    if (wordsLength == 1)
    {
        printf("%s\n", word);
    }
    else
    {
        printf("%s\n", words);
    }
}

int count_letters(string input)
{
    int textLength = 0;
    for (int i = 0, textLength2 = strlen(input); i  < textLength2; i++)
    {
        if (isspace(input[i]))
        {
            textLength--;
        }
        else (isalpha(input[i]));
        {
            textLength++;
        }

    }
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