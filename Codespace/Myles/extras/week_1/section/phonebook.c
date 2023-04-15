// Declares header files
#include <cs50.h>
#include <stdio.h>

// Prompts user for name, age, & phone number, assigns them to variables, and prints them back out to user for confirmation
int main(void)
{
    string name = get_string("\nWhat's your name? ");
    int age = get_int("Whats your age? ");
    string number = get_string("What's your phone number? ");

    printf("\nName: %s\nAge: %i\nPhone Number: %s\n\n", name, age, number);
}