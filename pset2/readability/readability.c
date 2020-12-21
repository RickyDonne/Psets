#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>



int main()
{
    int letters = 0;
    int words = 1;
    int sen = 0;
    int i;
    
    string text = get_string("Text: "); //Gets user input in Text
    
    for (i = 0; i < strlen(text); i++)
    {
        if ((text[i] >= 'a' && text[i] <= 'z') || (text[i] >= 'A' && text[i] <= 'Z'))
        {
            letters++;  //Counts letters
        }
        else if (text[i] == ' ')
        {
            words++;    //Counts Words
        }
        else if (text[i] == '.' || text[i] == '?' || text[i] == '!')
        {
            sen++;  //Counts Sentences
        }
    }
   
    float index = 0.0588 * (100 * (float) letters / (float) words) - 0.296 * (100 * (float)sen /
                  (float)words) - 15.8;  //Coleman-Liau index formula

    if (index < 16 && index >= 0)
    {
        printf("Grade %i\n", (int) round(index));   //prints grade
    }
    else if (index >= 16)
    {
        printf("Grade 16+\n");  //Doesn't show more than grade 16
    }
    else
    {
        printf("Before Grade 1\n");
    }
   
}