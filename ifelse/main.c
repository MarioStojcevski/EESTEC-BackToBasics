#include <stdio.h>
#include <stdlib.h>

int main()
{
    int mario = 1;

    if (mario == 1) {
        printf("mario e stvarno 1\n");
    } else {
        printf("mario i te kako ne e 1\n");
    }




    char karakter = 'm';
    int rezultat = karakter == 'm' ? 1 : 0;
    printf("\nPrintam 1 ako karakter == m, inaku printam 0\n");
    printf("%d", rezultat);
}
