#include <unistd.h>
#include <stdio.h>
/*Vous devez implémenter la fonction my_strlen (dans un fichier my_strlen.c), qui prend
en paramètre une chaîne de caractères, et qui renvoie sa taille.*/
int my_strlen(char *c);

int main() {
    my_strlen("Taille");
    return 0;
}

int my_strlen(char *c) 
{return strlen(c);}
