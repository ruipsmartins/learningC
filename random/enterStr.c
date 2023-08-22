#include <stdio.h>

int main()
{
    char frase[50];
    printf("write a string: ");
    fgets(frase, sizeof(frase), stdin);
    printf("you entered: %s\n", frase);
    return 0;
}