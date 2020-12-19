#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int num;
    
    do
    {
        num = get_int("Height: ");
    }
    while (!((num <= 8) && (num >= 1)));
    
    for (int i = num - 1; i >= 0; --i)
    {
        for (int j = 1; j <= i; j++)
        {
            printf(" ");        //prints space
        }
        for (int k = 1; k <= num - i; k++)
        {
            printf("#");        //prints # after the spaces
        }
        printf("\n");           //a new line is added after the row is completed
    }
}