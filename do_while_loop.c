include <stdio.h>

int main() 
{
        int a = 5;
        do
        {
                printf("a is equal to %d ---- body of do loop\n", a);
                a++;
        } while (a < 10);
        {
                printf("a is equal to %d ---- body of while loop\n", a);
        }
        return 0;
}

/*
 pi@RaspPi4:~/Coding/C_folder/c_gui_programming $ ./do_while 
a is equal to 5 ---- body of do loop
a is equal to 6 ---- body of do loop
a is equal to 7 ---- body of do loop
a is equal to 8 ---- body of do loop
a is equal to 9 ---- body of do loop
a is equal to 10 ---- body of while loop
*/
