#include <stdio.h>
#include <string.h>

int main()
{
	char str[] = "No Time Like the Present.";
	char sub[] = "Time";

	if (strstr(str, sub) == NULL)
	{
		printf("Substring\"Time\" Not Found\n");
	}
	else
	{
		printf("Substring\"Time\" Found at %p\n", strstr(str, sub));
		printf("Element Index Number %d\n\n", strstr(str, sub) -str);
	}

	printf("%s Versus \"Time\": %d\n", sub, strcmp(sub, "Time"));
	printf("%s Versus \"time\": %d\n", sub, strcmp(sub, "time"));
	printf("%s Versus \"TIME\": %d\n", sub, strcmp(sub, "TIME"));

	return 0;
}

/*
pi@RaspPi4:~/Coding/C_folder/in_easy_steps/ch8 $ ./searchStr 
Substring"Time" Found at 0xbea851f7
Element Index Number 3

Time Versus "Time": 0
Time Versus "time": -32
Time Versus "TIME": 32
*/
