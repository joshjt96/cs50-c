#include <cs50.h>
#include <stdio.h>

int main(voic)
{
    string answer = get_string("What is your name? ");
    printf("hello, %s", answer);

    int x = get_int("What's x? ");
    int y = get_int("What's y? ");

    if (x < y)
{ 
    printf("X is less than Y/n")
}
else if (x > y)
{
    printf("X is greater than Y/n")
}
else
{
    printf("X is equal to Y/n")
}
}

int counter = 1
counter = counter++

int i = 0
while (i <= 3)
{
    printf("meow\n");
    i++;
}

// For loop:
for (int i = 0; i < 3; i++)
{
     printf("meow\n");
}

// Nested loops. This will print a 3x3 grid of '#':
// Note: use const to say this variable is a constant. Same as JS

int main(void)
{
    const int n = 3;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}

// Do while loop:

int main(void)
{   
    // Creating a variable without an initial value like this means you can add a value to it later.
    int n;
    do
    {
        n = get_int("Size: ");
    } while (n < 1);
    
}

// In C, the first line of functions need to be written at the top of the file so the compiler knows they exist.

int main(void)
{
    string name = get_string("What is your name? ");
    printf("Hello, %s\n", name);
}