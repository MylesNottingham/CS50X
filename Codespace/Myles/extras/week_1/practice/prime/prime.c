// Declares header files
#include <cs50.h>
#include <stdio.h>

// Declares function
bool prime(int number);

// Extracts prime numbers from a user defined range
int main(void)
{
    // Establishes minimum of range
    int min;
    do
    {
        min = get_int("Minimum: ");
    }
    while (min < 1);

    // Establishes maximum of range
    int max;
    do
    {
        max = get_int("Maximum: ");
    }
    while (min >= max);

    // Tests each number in range with prime function
    for (int i = min; i <= max; i++)
    {
        if (prime(i))
        {
            printf("%i\n", i);
        }
    }
}

// Function that divides input "number" by every number between two and one less than the inputted number
bool prime(int number)
{
    int not_prime = 0;
    for (int i = 2; i < number; i++)
    {
        if (number % i == 0)
        {
            not_prime++;
        }
    }
    if (number == 1 || not_prime != 0)
    {
        return false;
    }
    else
    {
        return true;
    }
}
