#include <stdio.h>

typedef struct 
{
	int x;
	int y;
} Point;

typedef struct
{
	Point a;
	Point b;
} Box;

Box rect = {6, 12, 30, 20};


Point top = {10, 20};
Point btm ;




int main()
{
	btm.x = 5;
	btm.y = 10;

	printf("\nTop x: %d, y: %d\n", top.x, top.y);
	printf("Bottom x: %d, y: %d\n", btm.x, btm.y);

	printf("\nPoint a x: %d", rect.a.x);
        printf("\nPoint a y: %d", rect.a.y);
        printf("\nPoint b x: %d", rect.b.x);
        printf("\nPoint b y: %d\n", rect.b.y);

	return 0;
}
/*
pi@RaspPi4:~/Coding/C_folder/in_easy_steps/ch9 $ ./typedef_ex1 

Top x: 10, y: 20
Bottom x: 5, y: 10

Point a x: 6
Point a y: 12
Point b x: 30
Point b y: 20
pi@RaspPi4:~/Coding/C_folder/in_easy_steps/ch9 $ 
*/
