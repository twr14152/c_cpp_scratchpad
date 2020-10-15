#include <stdio.h>

int main()
{
        enum NUM_COL
        {RED=1,YELLOW,BLUE,GREEN,ORANGE,BROWN,BLACK};

        int total;

        printf("\nRed is worth %d\n", RED);
        printf("Black is worth %d\n", BLACK);
        total = RED + YELLOW + BLUE + GREEN + ORANGE + BROWN + BLACK;

        printf("All the colors added together equals: %d\n\n ", total);
        return 0;



}
/*
$ ./enums

Red is worth 1
Black is worth 7
All the colors added together equals: 28

$
*/
