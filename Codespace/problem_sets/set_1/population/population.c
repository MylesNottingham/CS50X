// Declares header files
#include <cs50.h>
#include <stdio.h>

// Declares constant
#define MIN_POP 9

// Declares functions
int get_start(void), get_end(int start), calculate(int start, int end);



// Determines number of years it would take for population to grow from user inputted "start" to user inputted "end"
int main(void)
{
    // Prompts for start size and assigns to "start" variable
    int start = get_start();

    // Prompts for end size and assigns to "end" variable
    int end = get_end(start);

    // Calculates number of years until we reach threshold and assigns to "years" variable
    int years = calculate(start, end);

    // TODO: Prints number of years
    printf("Years: %i\n", years);
}



// Prompts user for start size until input is greater than or equal to defined minimum population
int get_start(void)
{
    int start;
    do
    {
        start = get_int("Start size: ");
    }
    while (start < MIN_POP);
    return start;
}

// Prompts user for end size until input is greater than or equal to start size
int get_end(start)
{
    int end;
    do
    {
        end = get_int("End size: ");
    }
    while (end < start);
    return end;
}

// Calculates number of years it will take for the "pop", using "start", to reach the "end"
int calculate(start, end)
{
    int pop = start;
    int years = 0;
    while (pop < end)
    {
        pop = pop + (pop / 3) - (pop / 4);
        years++;
    }
    return years;
}