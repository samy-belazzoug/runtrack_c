/*Vous devez implémenter la fonction char_is_digit (dans un fichier char_is_digit.c) qui
prend en paramètre un caractère, et qui renvoie 1 si le caractère est un chiffre, 0 si ça
n’en est pas un.*/

int char_is_digit(char c);

int main() {char_is_digit('a'); char_is_digit('0');}

int char_is_digit(char c) 
    {if (c == '0' | c == '1' | c == '2' | c == '3' | c == '4' | c == '5' | c == '6' | c == '7' | c == '8' | c == '9') 
        {return 1;}
    else {return 0;}}