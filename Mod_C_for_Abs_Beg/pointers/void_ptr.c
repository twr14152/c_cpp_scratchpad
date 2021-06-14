/*
 Void or generic pointer can point to any type 
 Casting into the targeted type from the void ptr 
 is all thats necessary (*(target_type *)void_ptr) 
*/

#include <stdio.h>

int main(void)
{
	int x = 47;
	int *ip = &x;
	void *v_ptr;
	v_ptr = ip;
	// Any of these print statments work
	// preference on how you write it is up to you
	printf("The pointed to valuse is: %d\n", *((int *)v_ptr));
	printf("The pointed to valuse is: %d\n", (*(int *)v_ptr));
	printf("The pointed to valuse is: %d\n", *(int *)v_ptr);
	
}

/*
pi@RaspPi4:~/Coding/C_folder/Modern_C_Absolute_beg $ ./void_ptr
The pointed to valuse is: 47
The pointed to valuse is: 47
The pointed to valuse is: 47
pi@RaspPi4:~/Coding/C_folder/Modern_C_Absolute_beg $
*/
