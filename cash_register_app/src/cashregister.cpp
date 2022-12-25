/*
Write a program that computes how much a customer has to pay after purchasing
two items.

The price is calculated according to the following rules:
• Buy one get one half off promotion: the lower price item is half price.
• If the customer is a club card member, additional 10% off.
• Tax is added.


Inputs to the program include:
• Two items’ prices
• Have club card or not (User enters ‘Y’ or ‘y’ for “yes”; ‘N’ or ‘n’ for “no”)
• Tax rate (User enters the percentage as a number; for example, they enter
8.25 if the tax rate is 8.25%)


Program displays:
• Base price - the price before the discounts and taxes
• Price after discounts - the price after the buy one get one half off promotion
and the member’s discount, if applicable
• Total price – the amount of money the customer has to pay (after tax)
printed with the precision of 2 decimal digits.


Hint: In order to print a number in a specific precision, you can use the round
function passing 2 arguments to it. To format to two decimal places you can use the printf function with the format of 2.2f.

For example, an execution could look like this:

Enter price of the first item: 10
Enter price of the second item: 20
Does customer have a club card? (Y/N): y
Enter tax rate, e.g. 5.5 for 5.5% tax: 8.25
Base price = 30.00
Price after discounts = 22.50
Total price = 24.36
*/

#include <iostream>
#include <string>
using namespace std;

const float CLUBCARDMEMBER_OFF = 0.1;

void read_user_input(int &price1, int &price2, char &club_card, float &tax);
float calculate_price(int price1, int price2, char club_card, float tax);

int main()
{
    int price1, price2;
    char club_card;
    float tax;

    read_user_input(price1, price2, club_card, tax);
    float price = calculate_price(price1, price2, club_card, tax);

    return 0;
}

void read_user_input(int &price1, int &price2, char &club_card, float &tax)
{
    printf("Enter price of the first item: ");
    scanf(" %d", &price1);
    printf("Enter price for the second item: ");
    scanf(" %d", &price2);
    printf("Does customer have a club card? (Y/N): ");
    scanf(" %c", &club_card);
    printf("Enter tax rate, e.g. 5.5 for 5.5%% tax: ");
    scanf(" %f", &tax);
}

float calculate_price(int price1, int price2, char club_card, float tax)
{
    float total_price = (float)price1 + (float)price2;

    // Display base price.
    printf("Base price = $%.2f.\n", total_price);

    // Calculate discounts.
    float disc;
    if (price1 < price2)
        disc = (float)price1 / 2.0;
    else
        disc = (float)price2 / 2.0;

    total_price -= disc;

    if (club_card == 'Y' | club_card == 'y')
        total_price *= 1 - CLUBCARDMEMBER_OFF;

    printf("Price after discounts: $%.2f.\n", total_price);

    // Calculate taxs.
    total_price *= 1 + tax / 100.0;
    printf("Total price = $%.2f.\n", total_price);

    return total_price;
}