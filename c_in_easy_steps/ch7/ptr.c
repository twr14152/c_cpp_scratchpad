#include <stdio.h>

void twice(int *ptr2);
void thrice(int *ptr2);




int main() {
	int num = 8;
	int *ptr = &num;

	printf("Regular variable contains: %d\n", num);
	printf("Pointer variable contains: 0x%p\n", ptr);
	printf("Pointer points to value: %d\n\n", *ptr);

	*ptr = 100;
	printf("Regular variable contains: %d\n", num);
	printf("Pointer variable contains: 0xp\n", ptr);
	printf("Pointer points to value: %d\n\n", *ptr);

	printf("Pointer arithmetic...\n\n");
	
	int i;
	int nums[10] = {1,2,3,4,5,6,7,8,9,10};

	int *ptr1 = nums;
	printf("At Address %p is Value: %d\n", ptr1, *ptr1);
	ptr1++;
	printf("At Address %p is Value: %d\n", ptr1, *ptr1);
	ptr1++;
	printf("At Address %p is Value: %d\n", ptr1, *ptr1);
	ptr1++;
	printf("At Address %p is Value: %d\n", ptr1, *ptr1);
	printf("Move ptr by 3\n");
	ptr1+=3; //cannot use *=, or /= to move ptr
	printf("At Address %p is Value: %d\n", ptr1, *ptr1);
	ptr1-=7; //reset ptr to 0
	printf("At Address %p is Value: %d\n", ptr1, *ptr1);
	
	printf("\nLoop through array using ptr arithmetic...\n\n");
	
	for (int n=0; n <= 10; n++)
	{
		printf("Element %d Contain Value: %d\n", n, *ptr1);
		ptr1++;
	}
 	
	int number = 10;
	int *ptr2 = &number;

	printf("ptr2 stores address: %p\n", ptr2);
	printf("*ptr2 dereference values: %d\n\n", *ptr2);
	printf("The original number value: %d\n", number);
	
	twice(ptr2);
	printf("The number value is now twice(): %d\n", number);
	thrice(ptr2);
	printf("Previous number value is now thrice(): %d\n", number);
	return 0;
}

void twice(int *v)
{
	*v = (*v * 2);
}

void thrice(int *v)
{
	*v = (*v * 3);
}

/*
pi@RaspPi4:~/Coding/C_folder/in_easy_steps/ch7 $ ./ptr 
Regular variable contains: 8
Pointer variable contains: 0x0xbee4f4dc
Pointer points to value: 8

Regular variable contains: 100
Pointer variable contains: 0xp
Pointer points to value: 100

Pointer arithmetic...

At Address 0xbee4f4b4 is Value: 1
At Address 0xbee4f4b8 is Value: 2
At Address 0xbee4f4bc is Value: 3
At Address 0xbee4f4c0 is Value: 4
Move ptr by 3
At Address 0xbee4f4cc is Value: 7
At Address 0xbee4f4b0 is Value: -1091153588

Loop through array using ptr arithmetic...

Element 0 Contain Value: -1091153588
Element 1 Contain Value: 1
Element 2 Contain Value: 2
Element 3 Contain Value: 3
Element 4 Contain Value: 4
Element 5 Contain Value: 5
Element 6 Contain Value: 6
Element 7 Contain Value: 7
Element 8 Contain Value: 8
Element 9 Contain Value: 9
Element 10 Contain Value: 10
ptr2 stores address: 0xbee4f4b0
*ptr2 dereference values: 10

The original number value: 10
The number value is now twice(): 20
Previous number value is now thrice(): 60
pi@RaspPi4:~/Coding/C_folder/in_easy_steps/ch7 $ 
*/
