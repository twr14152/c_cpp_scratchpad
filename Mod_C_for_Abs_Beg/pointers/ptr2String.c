//%s with pointer will reference entire string
//%c with pointer will reference 1st character

include <stdio.h>

int main(void)
{
        char *p = "Hello World!";
        printf("value of p: %s\n", p);
        printf("value of *p: %s\n", *p);

}

/*
pi@RaspPi4:~/Coding/C_folder $ ./ptr2String 
value of p: Hello World!  // didn't need to dereference....
Segmentation fault  // thought that was wierd result when you did....
pi@RaspPi4:~/Coding/C_folder $ 
*/
