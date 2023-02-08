#include <ctype.h>
#include <cs50.h>
#include <stdio.h>
#include <string.h>

// Points assigned to each letter of the alphabet
int POINTS[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};

int compute_score(string word);

int main(void)
{
    // Get input words from both players
    string word1 = get_string("Player 1: ");
    string word2 = get_string("Player 2: ");

    // Score both words
    int score1 = compute_score(word1);
    int score2 = compute_score(word2);

    // TODO: Print the winner
    // if statement that checks if score1 > score2.
        // if this is the case, printf "Player 1 wins!"
        // else if score1 < score2 printf "player2 wins!"
        // else printf "tie!"
    if (score1 > score2)
    {
        printf("Player 1 Wins!");
    }
    else if (score1 < score2)
    {
        printf("Player 2 Wins!");
    }
    else {
        printf("Tie!");
    }

}

int compute_score(string word)
{
    int score = 0;
    for (int i = 0, wordLength = strlen(word); i < wordLength; i++)
    {
        if (isupper(word[i]))
        {
            score += POINTS[word[i] - 'A'];
        }
        else if (islower(word[i]))
        {
            score += POINTS[word[i] - 'a'];
        }
    }
    return score;
}
    // Create integer variable to keep track of score
    // for loop over entire word to determine which characters are used.
        // i will represent index of character.
        // use strlen function to access the length of the string, store this in own variable.
        // Increment i while it's less than the word length.
    // if statements to check for text case and other characters.
        // Use isupper to check if current index letter of word is uppercase
        // if it is uppercase, then score += the points array taking in the word index, minus A.
            // Since A is 65 points ahead all lowercase letters, whatever the current letter
            // of the word array is will have 65 subtracted from it and will correspond to score of the correct lowercase letter.
                // You access the corresponding score from the points array by adding the above code in square brackets following the name of the array.
                // Same as accessing via POINTS[0], for example. You're just getting to the integer in the square brackets via some extra code.
        // else if lowercase, then score += the points array taking in the word index and subtracting 'a'. Same concept as above
    // return score