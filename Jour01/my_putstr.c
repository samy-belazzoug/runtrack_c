#include <unistd.h>
/*Vous devez implémenter deux fonctions, my_putchar (dans un fichier 
my_putchar.c) et my_putstr (dans un fichier my_putstr.c). La fonction 
my_putchar prend un caractère en paramètre, et l’écrit sur la sortie
standard.La fonction my_putstr prend une chaîne de caractères en paramètre,
et l’écrit sur la sortie standard, en utilisant la fonction my_putchar.*/
void my_putstr(char c[]);

int main() 
    {my_putstr("Hello, world !\0");
    return 0;}

void my_putstr(char c[])
    {write(1,c,strlen(c));}