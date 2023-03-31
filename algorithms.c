#include <cs50.h>
#include <stdio.h>
#include <string.h>

// Image the array as seven red lockers.
// Problem of wanting to know, "is the number 50 inside an array?"
// We can hand our array to an algorithm that can search through the array to see if the number 50 is
// in one of the lockers, reuturning the value true or false.

// Psuedocode for this algorithm:
    // For each door from left to right
        // If 50 is behind the door
            // Return true
        // Return false

// Further translated psuedocode:
    // For i from 0 to n-1
        // If 50 is behind doors[i]
            // Return true
        // Return false

// Binary search algorith psuedocode:
    // If there are no doors
        // Return false
    // If 50 is behind middle door
        // Return true
    // Else if 50 < middle door
        // Search left half
    // Else if 50 > middle door
        // Search right half

// Further:
    // If no doors
        // Return false
    // If 50 is behind doors[middle]
        // Return true
    // Else if 50 < doors[middle]
        // Search doors[0] through doors[middle-1]
    // Else if 50 > doors[middle]
        // Search doors[middle+1] through doors[n-1]

int doors[0, 1, 2, 3, 4, 5, 6];

for (int i = 0; i < doors; i++)
{
    if (doors[4] == 50)
    {
        return true;
    }
    else if (doors[4] < 50)
    {

    }
}

int main(void)
{
    // Array of integers
    int numbers[] = {20, 500, 10, 5, 100, 1, 50};

    // Search for number
    int n = get_int("Number: ");
    for (int i = 0; i < 7; i++)
    {
        if (numbers[i] == n)
        {
            printf("Found\n");
            return 0;
        }
    }
    printf("Not found\n");
    return 1;
}