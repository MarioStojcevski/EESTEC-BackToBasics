#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*Интересен број

    Eден природен e „интересен“ ако неговиот обратен број е делив со
    неговиот број на цифри. Обратен број е бројот составен од истите
    цифри, но во обратен редослед (на пример, 653 е обратен број на бројот 356).
    Од тастатура се внесува природен број n ( n > 9). Да се најде и отпечати
    најголемиот природен број помал од n кој што е „интересен“.
    Ако внесениот број не е валиден, да се отпечати соодветна порака (Brojot ne e validen).*/

    int broj;
    int opaki;
    int i;

    scanf("%d", &broj);

    if(broj<=9){
        printf("Brojot ne e validen");
        return 0;
    } else {
        for(i=broj-1;i>0;i--){
            opaki = 0;
            int cifri = 0;
            int temp = i;

            while(temp) {
                opaki *= 10;
                opaki += (temp%10);
                temp /= 10;
                cifri++;
            }

            if(opaki%cifri == 0) {
                break;
            }
        }
        printf("%d", i);
    }
}
