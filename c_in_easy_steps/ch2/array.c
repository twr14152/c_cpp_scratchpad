#include <stdio.h>

int main()
{
	int arr[3];
	arr[0] = 100;
	arr[1] = 200;
	arr[2] = 300;

	char str[10] = {'t','h','i','s',' ', 's','u','c','k','s'};

	printf("The first array value: %d\n", arr[0]);
	printf("The second array value: %d\n", arr[1]);
	printf("The third array value: %d\n", arr[2]);

	printf("String: %s \n", str);
	return 0;
}
/*
$ ./array 
The first array value: 100
The second array value: 200
The third array value: 300
String: this sucks 
$ 
*/
