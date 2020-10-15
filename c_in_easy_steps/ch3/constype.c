#include <stdio.h>

int main()
{
        enum NUM_COL
        {RED=1,YELLOW,BLUE,GREEN,ORANGE,BROWN,BLACK};
        enum NUM_COL pair = YELLOW + BLACK;
        int total;

        printf("\nRed is worth %d\n", RED);
        printf("Black is worth %d\n", BLACK);
        total = RED + YELLOW + BLUE + GREEN + ORANGE + BROWN + BLACK;

        printf("All the colors added together equals: %d\n\n", total);
        printf("Pair value: %d\n", pair);

        typedef unsigned short int USINT;
        USINT num = 16;
        printf("Unsigned short int value is: %d\n", num);
        return 0;



}
/*
pi@RaspPi4:~/Coding/C_folder/in_easy_steps/ch3 $ ./constype 

Red is worth 1
Black is worth 7
All the colors added together equals: 28

Pair value: 9
Unsigned short int value is: 16
pi@RaspPi4:~/Coding/C_folder/in_easy_steps/ch3 $ 
*/
