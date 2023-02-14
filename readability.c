#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int count_letters(string input);
int count_words(string text);
int count_sentences(string text);

int main(void)
{
    string userInput = get_string("Enter a sentence: ");

    int lettersLength = count_letters(userInput);
    int wordsLength = count_words(userInput);
    int sentenceLength = count_sentences(userInput);
    float averageLetters = 100 * (float) lettersLength / (float) wordsLength;
    float averageSentences = 100 * (float) sentenceLength / (float) wordsLength;
    int index = floor((0.0588 * averageLetters) - (0.296 * averageSentences) - 15.8);

    // printf("%s\n", userInput);

    if (index <= 1)
    {
        printf("Before Grade 1\n");
    }
    else if (index == 3)
    {
        printf("Grade 2\n");
    }
    else if (index >= 16)
    {
        printf("Grade 16+\n");
    }
    else
    {
        printf("Grade %i\n", index);
    }

    // printf("%i", lettersLength);
    // if (lettersLength == 1)
    // {
    //     printf("%s\n", " letter");
    // }
    // else
    // {
    //     printf("%s\n", " letters");
    // }

    // printf("%i", wordsLength);
    // if (wordsLength == 1)
    // {
    //     printf("%s\n", " word");
    // }
    // else
    // {
    //     printf("%s\n", " words");
    // }

    // printf("%i", sentenceLength);
    // if (sentenceLength == 1)
    // {
    //     printf("%s\n", " sentence");
    // }
    // else
    // {
    //     printf("%s\n", " sentences");
    // }
}

int count_letters(string input)
{
    float textLength = 0;
    for (int i = 0, inputLength = strlen(input); i  < inputLength; i++)
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
    float amountOfWords = 1;
    for (int i = 0; i < strlen(text); i++)
    {
        if (text[i] == ' ' && text[i + 1] != ' ')
        {
            amountOfWords++;
        }
    }
    return amountOfWords;
}

int count_sentences(string text)
{
    float numberOfSentences = 0;
    for (int i = 0; text[i] != '\0'; i++)
    {
        if (text[i] == '.' || text[i] == '!' || text[i] == '?')
    {
        numberOfSentences++;
        }
    }
    return numberOfSentences;
}