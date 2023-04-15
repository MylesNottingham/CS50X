//Header files
#include <cs50.h>
#include <stdio.h>

int get_size(void);
void print_grid(int size);



int main(void)
{
    //Get size of grid
    int n = get_size();

    //Prints grid of bricks
    print_grid(n);
}



int get_size(void)
{
    int n;
    do
    {
        n = get_int("Size: ");
    }
    while (n < 1);
    return n;
}

void print_grid(int size)
{
    for (int y = 0; y < size; y++)
    {
        for (int x = 0; x < size; x++)
        {
            printf("#");
        }
        printf("\n");
    }
}