// Declares header files
#include <cs50.h>
#include <stdio.h>

// Prompts user for their name and then displays a personalized greeting
int main(void)
{
    string name = get_string("What's your name? ");
    printf("hello, %s\n", name);
}