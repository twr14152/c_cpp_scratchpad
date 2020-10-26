#include <stdio.h>
#include <stdlib.h>

int main() 
{
	int n1, n2, n3;
	char s1[10] = "12eight";
	char s2[10]="-65.8";
	char s3[10] = "x13";

	n1 = atoi(s1);
	printf("\nString %s converts to Int: %d\n", s1, n1);

	n2 = atoi(s2);
	printf("\nString %s converts to Int: %d\n", s2, n2);

	n3 = atoi(s3);
	printf("\nSting %s converts to Int: %d\n\n", s3, n3);

//	The two itoa() is not working in this example ??	
//	itoa(n1, s1, 2);
//	printf("\nDecimal %d is Binary: %s\n", n1, s1);

	

	n2 = sprintf(s3, "%o", n1);
	printf("Decimal %d is Octal: %s chars: %d\n", n1, s3, n2);

	n3 - sprintf(s3, "%x", n1);
	printf("Decimal %d is Hexadecimal: %s chars: %d\n", n1, s3, n3);

	return 0;
}
/*
pi@RaspPi4:~/Coding/C_folder/in_easy_steps/ch8 $ ./conv_str_int 

String 12eight converts to Int: 12

String -65.8 converts to Int: -65

Sting x13 converts to Int: 0

Decimal 12 is Octal: 14 chars: 2
Decimal 12 is Hexadecimal: c chars: 0
pi@RaspPi4:~/Coding/C_folder/in_easy_steps/ch8 $ 
*/
