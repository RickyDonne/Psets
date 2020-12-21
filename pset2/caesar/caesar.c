//Author: Debarshi Biswas

#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, string argv[])
{
    //check if the argument command is not more than two word
    if (argc != 2)
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }
    
    //Variables used in the code
    int key;
    int n;
    char inp[100];
    strcpy(inp, argv[1]);
    int i;
    
    //check if the word in the argument command is alphanumeric or only numeric
    for (i = 0; inp[i] != '\0'; ++i)
    {
        if (!isdigit(inp[i]))
        {
            printf("Usage: ./caesar key\n");
            return 1;
        }
        else
        {
            continue;
        }
    }
    
    //a seperate key var for debugging purposes
    key = atoi(argv[1]);
    
    //Strings printed on the screen
    string text = get_string("Plaintext: ");
    printf("ciphertext: ");
    
    //enciphering and printing the ciphered text one by one character
    for (i = 0, n = strlen(text); i < n; ++i)
    {
        if (islower(text[i]))
        {
            printf("%c", (((text[i] + key) - 97) % 26) + 97);
        }
        else if (isupper(text[i]))
        {
            printf("%c", (((text[i] + key) - 65) % 26) + 65);
        }
        else
        {
            printf("%c", text[i]);
        }
    }
    
    //returing 0 to ensure the code ran properly
    printf("\n");
    return 0;
}
    
    