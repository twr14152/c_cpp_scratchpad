#include <stdio.h>
#include <stdlib.h>


int main(void)
{
	char card_name[3];
	int count = 0;
	while(card_name[0] != 'x') {
		puts("Enter the card number: ");
		scanf("%2s", card_name);
		int val = 0;
		switch(card_name[0]) {
			case 'K':
			case 'Q':
			case 'J':
				val = 10;
				break;
			case 'A':
				val = 11;
				break;
			case 'x':
				continue; 
				//This will send up to while to inspected
			default:
				val = atoi(card_name);
				if ((val < 1) || (val > 10)) {
					puts("I don't understand that value.");
					continue;
				}
		}
		if ((val > 2) && (val < 7)) {
			count++;
		} else if ( val == 10 ) {
			count--;
		}
		printf("Current count: %i\n", count);
	}
	return 0;
}
