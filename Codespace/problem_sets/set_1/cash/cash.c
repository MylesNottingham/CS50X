// Declares header files
#include <cs50.h>
#include <stdio.h>

// Declares functions
int get_cents(void);
int calculate_quarters(int cents);
int calculate_dimes(int cents);
int calculate_nickels(int cents);
int calculate_pennies(int cents);



// Prompts user for change owed and determines minimum number of coins needed to provide change
int main(void)
{
    // Ask how many cents the customer is owed
    int cents = get_cents();

    // Calculate the number of quarters to give the customer
    int quarters = calculate_quarters(cents);
    cents = cents - quarters * 25;

    // Calculate the number of dimes to give the customer
    int dimes = calculate_dimes(cents);
    cents = cents - dimes * 10;

    // Calculate the number of nickels to give the customer
    int nickels = calculate_nickels(cents);
    cents = cents - nickels * 5;

    // Calculate the number of pennies to give the customer
    int pennies = calculate_pennies(cents);
    cents = cents - pennies * 1;

    // Sum coins
    int coins = quarters + dimes + nickels + pennies;

    // Print total number of coins to give the customer
    printf("%i\n", coins);
}



// Prompts user for change owed and, once input between 0 and 99 is verified, returns value
int get_cents(void)
{
    int cents;
    do
    {
        cents = get_int("Change owed: ");
    }
    while (cents < 0);
    return cents;
}

// Determine nuber of quarters possible and return value
int calculate_quarters(int cents)
{
    int quarters = cents / 25;
    return quarters;
}

// Determine number of dimes possible and return value
int calculate_dimes(int cents)//0 - 24
{
    int dimes = cents / 10;
    return dimes;
}

// Determine number of nickels possible and return value
int calculate_nickels(int cents)
{
    int nickels = cents / 5;
    return nickels;
}

// Determine number of pennies possible and return value
int calculate_pennies(int cents)
{
    return cents;
}
