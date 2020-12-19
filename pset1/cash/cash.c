#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main()
{
    float cash;
    do
    {
        cash = get_float("Change owed: $");
    }
    while (cash < 0);   //Runs till input is a positive number.
    int cents = round(cash * 100);      //Transforms change into a integer from decimal.
    int count = 0;      //Count is incremented everytime cents get reduced.

    while (cents != 0)  //Runs till change doesn't becomes zero.
    {
        if (cents >= 25)
        {
            cents -= 25;
            count++;
        }
        else if (cents >= 10)
        {
            cents -= 10;
            count++;
        }
        else if (cents >= 5)
        {
            cents -= 5;
            count++;
        }
        else if (cents >= 1)
        {
            cents -= 1;
            count++;
        }
    }
    printf("%d\n", count);
}