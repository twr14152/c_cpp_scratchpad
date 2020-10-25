#include <stdio.h>

void twice(int *ptr2);
void thrice(int *ptr2);
int bounce(int a);
int caller (int(*function)(int), int b);


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
	
	int a;
	int num_array[5] = {1, 2, 3, 4, 5};
	
	int *ptr01 = &num_array[0];
	int *ptr02 = &num_array[1];
	int *ptr03 = &num_array[2];
	int *ptr04 = &num_array[3];
	int *ptr05 = &num_array[4];
	
	int *ptrs[5] = {ptr01, ptr02, ptr03, ptr04, ptr05};

	char str[9] = {'C', ' ', 'i','s', ' ', 'f','u','n','\0'};
	char *string = str;
	char *strings[3] = {"One", "Two", "Three"};

	for (int j = 0; j < 5; j++)
	{
		printf("The value at %p is: %d\n", ptrs[j], *ptrs[j]);
	}
	printf("\nString is: %s\n\n", string);
	for (int k = 0; k < 3; k++)
	{
		printf("String %d is: %s\n", k, strings[k]);
	}
        int num2;
	int (*fptr)(int) = bounce;
	num2 = (*fptr)(10);
	printf("Return Value: %d\n", num2);

	num2 = caller(fptr, 5);
	printf("Returned Value: %d\n", num2);

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

int bounce(int a)
{
	printf("\nReceived Value: %d\n", a);
	return ((3 * a) + 3);
}

int caller(int(*function)(int), int b)
{
	(*function)(b);
}

/*
pi@RaspPi4:~/Coding/C_folder/in_easy_steps/ch7 $ ./ptr 
Regular variable contains: 8
Pointer variable contains: 0x0xbebe74b4
Pointer points to value: 8

Regular variable contains: 100
Pointer variable contains: 0xp
Pointer points to value: 100

Pointer arithmetic...

At Address 0xbebe748c is Value: 1
At Address 0xbebe7490 is Value: 2
At Address 0xbebe7494 is Value: 3
At Address 0xbebe7498 is Value: 4
Move ptr by 3
At Address 0xbebe74a4 is Value: 7
At Address 0xbebe7488 is Value: 0

Loop through array using ptr arithmetic...

Element 0 Contain Value: 0
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
ptr2 stores address: 0xbebe7488
*ptr2 dereference values: 10

The original number value: 10
The number value is now twice(): 20
Previous number value is now thrice(): 60
The value at 0xbebe7474 is: 1
The value at 0xbebe7478 is: 2
The value at 0xbebe747c is: 3
The value at 0xbebe7480 is: 4
The value at 0xbebe7484 is: 5

String is: C is fun

String 0 is: One
String 1 is: Two
String 2 is: Three

Received Value: 10
Return Value: 33

Received Value: 5
Returned Value: 18
pi@RaspPi4:~/Coding/C_folder/in_easy_steps/ch7 $ 
*/
