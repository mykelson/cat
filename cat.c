// Implements Linux's cat command
#include <stdio.h>

int main(void)
{
     FILE *file2 = fopen("mikey.txt", "r");
    char gold;
    while((gold = fgetc(file2)) != EOF)
        printf("%c", gold);
    fclose(file2);
}