// Declares header files
#include <cs50.h>
#include <stdio.h>
#include <math.h>

// Declares functions
long get_card_number();
int get_card_len(long card_number);
int get_first_two(long card_number, int card_len);
bool validate(long card_number, int card_len);

// Prompts user for card number and checks to see if it is a valid AMEX, MASTERCARD, or VISA
// If valid will display card type and if invalid will display INVALID
int main(void)
{
    long card_number = get_card_number();
    int card_len = get_card_len(card_number);
    int first_two = get_first_two(card_number, card_len);
    bool validated = validate(card_number, card_len);
    if (validated)
    {
        if ((first_two == 34 || first_two == 37) && card_len == 15)
        {
            printf("AMEX\n");
        }
        else if ((first_two >= 51 && first_two <= 55) && card_len == 16)
        {
            printf("MASTERCARD\n");
        }
        else if ((first_two >= 40 && first_two <= 49) && (card_len == 13 || card_len == 16))
        {
            printf("VISA\n");
        }
        else
        {
            printf("INVALID\n");
        }
    }
    else
    {
        printf("INVALID\n");
    }
}



// Prompts user for card number and returns as "long"
long get_card_number(void)
{
    long card_number = get_long("Input: ");
    return card_number;
}

// Determines number of digits in card number using card number as input
int get_card_len(long card_number)
{
    int digits = 0;
    do
    {
        card_number = card_number / 10;
        ++digits;
    }
    while (card_number != 0);
    return digits;
}

// Gets first two digits of card number using card number and number of digits as input
int get_first_two(long card_number, int card_len)
{
    long big_divisor = pow(10, (card_len - 2));
    int first_two = card_number / big_divisor;
    return first_two;
}

// Validates card number checksum based on Luhn's algorithm
bool validate(long card_number, int card_len)
{
    // Odd checksum getter
    int odd_checksum = 0;
    long lead_slice = 10;
    long trail_slice = 1;
    for (int i = 0; i < card_len; i = i + 2)
    {
        int digit = (card_number % lead_slice) / trail_slice;
        odd_checksum = odd_checksum + digit;
        lead_slice = lead_slice * 100;
        trail_slice = trail_slice * 100;
    }

    // Even checksum getter
    int even_checksum = 0;
    lead_slice = 100;
    trail_slice = 10;
    for (int i = 1; i < card_len; i = i + 2)
    {
        int digit = (card_number % lead_slice) / trail_slice;
        int doubled_digit = digit * 2;
        if (doubled_digit > 9)
        {
            int doubled_digit_1 = doubled_digit / 10;
            int doubled_digit_2 = doubled_digit % 10;
            doubled_digit = doubled_digit_1 + doubled_digit_2;
        }
        even_checksum = even_checksum + doubled_digit;
        lead_slice = lead_slice * 100;
        trail_slice = trail_slice * 100;
    }

    // Total checksum checker
    int checksum = odd_checksum + even_checksum;
    if (checksum % 10 == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}