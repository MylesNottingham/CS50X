// Declares header files
#include <cs50.h>
#include <stdio.h>

// Declares function
int get_height(void);



// Builds a right aligned pyramid based on user defined height
int main(void)
{
    // Gets height from user
    int height = get_height();

    // Establishes some counter variables
    int number_of_spaces = height - 1;
    int number_of_blocks = 1;

    // Prints number of rows defined in "height"
    for (int row = 0; row < height; row++)
    {
        // Prints spaces based on row number
        for (int c = 0; c < number_of_spaces; c++)
        {
            printf(" ");
        }
        // Prints hashes based on iteration number
        for (int c = 0; c < number_of_blocks; c++)
        {
            printf("#");
        }
        number_of_spaces--;
        number_of_blocks++;
        printf("\n");
    }
}



// Prompts user for height and ensures it is an int between 1 and 8 inclusive
int get_height(void)
{
    int height;
    do
    {
        height = get_int("Height: ");
    }
    while (height < 1 || height > 8);
    return height;
}