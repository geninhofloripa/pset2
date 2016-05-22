/**
 * Eugenio Streliaev-Filho
 * geninhofloripa@hotmail.com
 * 
 * pset2 - initials.c
 * 
 * pronpts for user's name and prints out 
 * only his/hers initials in capital letters.
 */

#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    // initializes a string saving in it the return value of GetString() 
    string nome = GetString();
    
    // converts to uppercase the first character of the first typed word
    printf("%c", toupper(nome[0]));
        
    // converts to uppercase the string element following a space
    for (int i = 0, n = strlen(nome); i < n; i++)
    {
        if (nome[i] == ' ')
        {
            printf("%c", toupper(nome[i + 1]));
        }    
    }
    
    printf("\n");
}
