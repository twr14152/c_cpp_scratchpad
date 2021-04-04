#include <iostream>
using namespace std;

int main()
{
  int day = 0;
  printf("Enter number 0-7 which day of the week is it (1 = Monday....7=Sunday):\n");
  scanf("%d", &day);
  
  switch (day)
  {
    case 1 : 
      cout << "Monday" << endl; 
      break;
    case 2 : 
      cout << "Tuesday" << endl; 
      break;
    case 3 : 
      cout << "Wednesday" << endl; 
      break;
    case 4 : 
      cout << "Thursday" << endl;
      break;
    case 5 : 
      cout << "Friday" << endl;
      break;
    default : 
      cout << "Weekend day" << endl;
  }
  return 0;
}

/*
 ./main
Enter number 0-7 which day of the week is it (1 = Monday....7=Sunday):
1
Monday
 ./main
Enter number 0-7 which day of the week is it (1 = Monday....7=Sunday):
5
Friday
 ./main
Enter number 0-7 which day of the week is it (1 = Monday....7=Sunday):
6
Weekend day
 
*/
