#include <stdio.h>
#include <string.h>

char arrayRowColumns[][80] = {
	"alice_in_chains in stock in row 0",
	"faith_no_more in stock in row 1",
	"tomahawk in stock in row 2",
	"mad_season in stock in row 3",
};

void find_shit(char search_for[])
{
	int i;
	for (i = 0; i <= 4; i++) {
		if (strstr(arrayRowColumns[i], search_for)) {
			printf("Found: %s\n",arrayRowColumns[i]);
			break;
		}
		else {
			printf("%s not in row %d \n", search_for, i);
		}
	}
}


int main(void) 
{
	char search_for[80];
        printf("Search for: ");
	fgets(search_for, 80, stdin);
	search_for[strlen(search_for) -1] = '\0';
	find_shit(search_for);
	return 0;
}
/*
pi@raspberrypi:~/Code_folder/c_folder/HeadFirstC/ch2.5 $ ./a.out
Search for: mad_season
mad_season not in row 0 
mad_season not in row 1 
mad_season not in row 2 
Found: mad_season in stock in row 3
pi@raspberrypi:~/Code_folder/c_folder/HeadFirstC/ch2.5 $ ./a.out
Search for: tomahawk
tomahawk not in row 0 
tomahawk not in row 1 
Found: tomahawk in stock in row 2
pi@raspberrypi:~/Code_folder/c_folder/HeadFirstC/ch2.5 $ 
*/
