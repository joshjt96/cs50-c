// int main(void)
// {
//     int scores[3];
//     scores[0] = 72;
//     scores[1] = 73;
//     scores[3] = 74;

//     printf("Average: %f\n", (scores[0], scores[1], scores[2]) / (float) 3);
// }

// // function that returns a floating point number (a 'float'):
// float average(int array[])
// {
    
// }

#include <cs50.h>
#include <stdio.h>

const int N = 3;

 float average(int length, int array[]);

int main(void)
{
    int scores[N];
    for (int i = 0; i < N; i++)
    {
        scores[i] = get_int("Score: ");
    }

    printf("Average: %f\n", average(scores));
}

// function that returns a floating point number (a 'float'):
float average(int array[])
{
    int sum = 0;
    for (int i = 0; i < length; i++)
    {
        sum += array[i];
    }
    return sum / (float) N;
}