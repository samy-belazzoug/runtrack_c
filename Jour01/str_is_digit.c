#include <unistd.h>
#include <stdio.h>
/*Vous devez aussi implémenter une fonction str_is_digit (dans un fichier str_is_digit.c)
qui prend en paramètre une chaîne de caractères, et qui renvoie 1 si la chaîne ne
contient que des chiffres, 0 si ce n’est pas le cas.*/
int str_is_digit(char *str);

int main() {str_is_digit("00011101\0");str_is_digit("7718z1\0");}

int str_is_digit(char *str) 
{
    for (int i = 0; i < strlen(str);i++) {
    
        char c = (char) str[i];
        
        if (c == '0' | c == '1' | c == '2' | c == '3' | c == '4' | c == '5' | c == '6' | c == '7' | c == '8' | c == '9') 
            {continue;}
        
        else 
            {printf("%d",0);
            return 0;}
    }
        
        printf("Valid");
        return 1;
}