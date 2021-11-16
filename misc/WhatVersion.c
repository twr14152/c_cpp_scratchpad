#include <stdio.h>

int main(void) {
        printf("the version of c your running is: %ld\n", __STDC_VERSION__);
        return 0;
}

/*
pi@RaspPi4:~/Coding/C_folder/misc $ ./a.out 
the version of c your running is: 201710
pi@RaspPi4:~/Coding/C_folder/misc $ 
*/
