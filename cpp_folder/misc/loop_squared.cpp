#include<iostream>

using namespace std;

int sqrd(int num)
{
	return num * num;
}


int main()
{
	for (int i=0; i <= 15; i++) {
		cout << i << " squared is: " << sqrd(i) << endl;
	}
}
/*
pi@RaspPi4:~/Coding/CPP_folder/PPPuCPP $ ./loop_squared 
0 squared is: 0
1 squared is: 1
2 squared is: 4
3 squared is: 9
4 squared is: 16
5 squared is: 25
6 squared is: 36
7 squared is: 49
8 squared is: 64
9 squared is: 81
10 squared is: 100
11 squared is: 121
12 squared is: 144
13 squared is: 169
14 squared is: 196
15 squared is: 225
pi@RaspPi4:~/Coding/CPP_folder/PPPuCPP $ 
*/
