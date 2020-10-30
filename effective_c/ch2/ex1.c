#include <stdio.h>


void increment(void);
void current_count(int counter);

void increment(void) {
	static unsigned int counter = 0;
	current_count(counter);
	counter++;
	printf("\tIncrementer value %d \t", counter);
}

void current_count(int a) {
	printf("\nCurrent counter value: %d", a);
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

Current counter value: 0	Incrementer value 1 	
Current counter value: 1	Incrementer value 2 	
Current counter value: 2	Incrementer value 3 	
Current counter value: 3	Incrementer value 4 	
Current counter value: 4	Incrementer value 5 	
pi@RaspPi4:~/Coding/C_folder/effective_c/ch2 $ 
*/
