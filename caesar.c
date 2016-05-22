/**
 * Eugenio Streliaev-Filho
 * geninhofloripa@hotmail.com
 * 
 * caesar.c
 * pset2 assignment
 * 
 * Ceaser Cipher encription using a key given by user.
 */


#include <stdio.h>
#include <cs50.h>
#include <ctype.h>
#include <string.h>

int main(int argc, string argv[])
{
    // argc should equal 2 - program name + key
    if (argc != 2)
    {
        printf("Usage: ./caesar <key>\n");
        return 1;
    }
     // atoi tranforms a string to an int -belongs to stdlib.h 
    int k = atoi(argv[1]);
    
    if (k < 0)
    {
        printf("Key must be a non-negative integer.\n");
    }
    
    // promps for string 
    string texto = GetString();
    
    // iterates on its letters
    for (int i = 0, n = strlen(texto); i < n; i++)
    {
        
        int letter = texto[i]; 
        
        // tests for uppercase
        if (isupper(letter))
        {
            printf("%c",  'A' + (letter - 'A' + k) % 26    );
        }
        
        // same for lower case
        else if (islower(letter))
        {
            printf("%c", 'a' + (letter - 'a' + k) % 26  );
        }
        
         // prints unchanged
        else 
        {
            printf("%c", letter);
        }
    }    
        
    printf("\n");
    return 0;

}
