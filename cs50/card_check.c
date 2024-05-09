#include <stdbool.h>
#include <stdio.h>

int main(void)
{
    long card_num;
    printf("Number: ");
    scanf("%ld", &card_num); // Get the card number from the user
    int digits = 0;
    int start_digits = 0;
    int sum = 0;

    for (int i = 0; card_num != 0; i++, card_num /= 10) { //Luhn's Algorithm
        if (i % 2 == 0) // If the digit is in an even position, add it to the sum

        {
            sum += card_num % 10;

        } else {
            int digit = 2 * (card_num % 10); // If the digit is in an odd position, double it and add the digits to the sum
            sum += digit / 10 + digit % 10;
        }

        if (card_num >= 10 && card_num < 100) // If the card number is between 10 and 100, store it as the starting digits
        {
            start_digits = card_num;
        }

        digits++;
    }

    bool valid = sum % 10 == 0; // Check if the sum is a multiple of 10

    if (!valid) //Check to see the type of the card or to see wheter if it's even vaild or not
    {
        printf("INVALID\n");
    } else if ((start_digits == 34 || start_digits == 37) && digits == 15) {
        printf("AMEX\n");
    } else if ((start_digits >= 51 && start_digits <= 55) && digits == 16) {
        printf("MASTERCARD\n");
    } else if ((start_digits / 10 == 4) && (digits == 13 || digits == 16)) {
        printf("VISA\n");
    } else {
        printf("INVALID\n");
    }

    return 0;
}