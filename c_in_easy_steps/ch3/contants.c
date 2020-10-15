#include <stdio.h>

int main()
{
	const float PI = 3.141593;
	float diameter;
	float radius;
	float circ;
	float area;
	printf("Enter the diameter of a circle in millimeters: ");
	scanf("%f", &diameter);
	circ = PI * diameter;
	radius = diameter/2;
	area = PI * (radius * radius);
	printf("\n\tCircumference is %.2f mm", circ);
	printf("\n\tArea the area is %.2f sq.mm \n", area);
	return 0;
}

/*
pi@RaspPi4:~/Coding/C_folder/in_easy_steps/ch3 $ ./constant 
Enter the diameter of a circle in millimeters: 20

	Circumference is 62.83 mm
	Area the area is 314.16 sq.mm 
pi@RaspPi4:~/Coding/C_folder/in_easy_steps/ch3 $ 
*/
