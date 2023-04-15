// Declares header files
#include <cs50.h>
#include <stdio.h>
#include <string.h>

// TODO
int main(void)
{
    int number = 20;
    char str_test[100] = "1";
    string t2 = "2";
    strcat(str_test, t2);
    string t3 = "3";
    strcat(str_test, t3);
    printf("%s\n", str_test);
    printf("%c\n", str_test[0]);
    printf("%c\n", str_test[1]);
    printf("%c\n", str_test[2]);

    int not_prime = 0;
    for (int i = 0; i < strlen(str_test); i++)
    {
        if (number % str_test[i] == 0)
        {
            not_prime++;
        }
    }
    if (number == 1 || not_prime != 0)
    {
        printf("Not Prime\n");
    }
    else
    {
        printf("Prime\n");
    }
}