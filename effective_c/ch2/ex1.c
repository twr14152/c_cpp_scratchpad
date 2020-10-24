#include <stdio.h>


void increment(void);
void current_count(int counter);

void increment(void) {
	static unsigned int counter = 0;
	current_count(counter);
	counter++;
	printf("incrementer value %d \t", counter);
}

void current_count(int a) {
	printf("current counter value: %d \n", a);
}
int main(void) {
	for (int i = 0; i < 5; i++) {
		increment();
	}
	printf("\n");
	return 0;
}

/*
pi@RaspPi4:~/Coding/C_folder/effective_c/ch2 $ ./ex1
current counter value: 0 
incrementer value 1 	current counter value: 1 
incrementer value 2 	current counter value: 2 
incrementer value 3 	current counter value: 3 
incrementer value 4 	current counter value: 4 
incrementer value 5 	
pi@RaspPi4:~/Coding/C_folder/effective_c/ch2 $ 
*/
