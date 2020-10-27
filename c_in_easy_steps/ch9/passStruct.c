#include <stdio.h>

typedef struct
{
	char *name;
	int quantity;
} Item;

Item fruits[3] = {
	{"apple", 10},
	{"orange", 20},
	{"pear", 30}
};

void display(Item val, Item *ref);

int main()
{
	display(fruits[0], &fruits[0]);
	return 0;
}

void display(Item val, Item *ref)
{
	printf("%s: %d\n", val.name, val.quantity);
	val.name = "banana";
	val.quantity = 40;
	printf("%s: %d\n", val.name, val.quantity);
	printf("%s:%d\n", fruits[0].name, fruits[0].quantity);
	ref->name = "peach"; 
	ref->quantity = 50;
	printf("%s: %d\n", fruits[0].name, fruits[0].quantity);

}
/*
pi@RaspPi4:~/Coding/C_folder/in_easy_steps/ch9 $ ./passStruct
apple: 10
banana: 40
apple:10
peach: 50
pi@RaspPi4:~/Coding/C_folder/in_easy_steps/ch9 $ 
*/
