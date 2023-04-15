//Header files
#include <cs50.h>
#include <stdio.h>

int main(void)
{
    //Get size of grid
    int n;
    do
    {
        n = get_int("Size: ");
    }
    while (n < 1);

    //Prints grid of bricks
    for (int y = 0; y < n; y++)
    {
        for (int x = 0; x < n; x++)
        {
            printf("#");
        }
        printf("\n");
    }
}