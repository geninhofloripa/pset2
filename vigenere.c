/**
 * Eugenio Streliaev-Filho
 * geninhofloripa@hotmail.com
 * 
 * vigenere.c
 * pset2 assignment
 * 
 * Vigenere Cipher encription using a keyword given by user.
 */

#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>


int main(int argc, string argv[])
{
    
    if (argc != 2)
    {
        printf("Usage: ./vigenere <key>\n");
        return 1;
    }
    
    string senha = argv[1];
    for (int i = 0, n = strlen(senha); i < n; i++)
    {
        if (isalpha(senha[i]) == false)
        {
            printf("Keyword must only contain letters A-Z and a-z\n");
            return 1;
        }
    }
    
    string message = GetString();
    int senha_len = strlen(senha);

    
    // iterage com a messagem carater a carater 
    for (int i = 0, j = 0, n = strlen(message) ; i < n; i++)
    {
        // ve se cada letra da message é ALPHA
        if (isalpha(message[i]) )
        {
            // faz o indice a partir da senha
            int key = tolower(senha[j % senha_len]) - 'a';
            
            // ve se a letra i da mensagem é maiuscula 
            if (isupper(message[i]) )
            {
                // ENCRIPTA
                int letter = (message[i]) ;
                printf("%c", 'A' + (letter - 'A' + key  ) % 26 );
                j++;
            }
        
        
            // se for minuscula
            else
            {   
                // ENCRIPTA
                int letter = (message[i]) ;
                printf("%c", 'a' + (letter - 'a' + key  ) % 26 );
                j++;
            }
            
            
        }
        // se nao for alpha printa como era
        else
        {
            printf("%c", message[i]);    
        }
    } 
    printf("\n");
    return 0;
}
