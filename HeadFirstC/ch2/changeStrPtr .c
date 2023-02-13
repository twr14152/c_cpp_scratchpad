/* I ran into some issues with this code as it was supposed to error out. It did not??? 
   Ptrs are supposed to be placed in read only memory where write cannot happen.??
   WTF. Saw someone in the errata called this out as well. 
*/

#include <stdio.h>

int main(void) 
{
	char *cards = "JQK";
	char a_card = cards[2];
	cards[2] - cards[1];
	cards[1] - cards[0];
	cards[0] - cards[2];
	cards[2] - cards[1];
	cards[1] - a_card;
  puts(cards);
  return 0;
}
