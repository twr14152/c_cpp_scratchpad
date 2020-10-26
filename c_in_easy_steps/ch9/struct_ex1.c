#include <stdio.h>

struct coords
{
	int x;
	int y;
} point;    // creates tag name point and an instance of coords

struct coords top;

int main()
{
	point.x = 5;
	point.y = 6;
	top.x = 10;
	top.y = 24;
	
	printf("\npoint x: %d, point y: %d\n", point.x, point.y);
	printf("\ntop x: %d, top y: %d\n", top.x, top.y);
	
	return 0;
}
	
	
/*
pi@RaspPi4:~/Coding/C_folder/in_easy_steps/ch9 $ ./struct_ex1 

point x: 5, point y: 6

top x: 10, top y: 24
pi@RaspPi4:~/Coding/C_folder/in_easy_steps/ch9 $ 
*/
