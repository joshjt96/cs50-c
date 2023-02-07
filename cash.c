// Implement get_cents in such a way that the function prompts 
// the user for a number of cents using get_int and then returns 
// that number as an int. If the user inputs a negative int, 
// your code should prompt the user again. 
// (But you don’t need to worry about the user inputting, 
// e.g., a string, as get_int will take care of that for you.) 
// Odds are you’ll find a do while loop of help, as in mario.c!

int get_cents(int cents)
{
    do
    {
        cents = get_int("Number of cents: ");
        return cents;
    }
    while (cents > 0);
}

// Implement calculate_quarters in such a way that the function calculates 
// (and returns as an int) how many quarters a customer should be given if 
// they’re owed some number of cents. For instance, if cents is 25, 
// then calculate_quarters should return 1. If cents is 26 or 49 
// (or anything in between, then calculate_quarters should also return 1. 
// If cents is 50 or 74 (or anything in between), then calculate_quarters 
// should return 2. And so forth.



Implement calculate_dimes in such a way that the function calculates the same for dimes.
Implement calculate_nickels in such a way that the function calculates the same for nickels.
Implement calculate_pennies in such a way that the function calculates the same for pennies.