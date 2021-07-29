#include <iostream>
#include <string>

using namespace std;

class Man
{
	//
	public:
		void speak() {cout << "Hello!" << endl;}
		void speak(string msg){cout << "(Base Class) " << msg << endl;}

	//
};
class Hombre : public Man
{
	public:
		void speak(string msg){cout << "(child class)" << msg << endl;}

};

int main()
{
	Man henry;
	Hombre enrique;
	henry.speak();
	henry.speak("I wonder which method will be used ???");
	enrique.speak("Hola!");
	enrique.Man::speak("Que pasa mi amigo?");
	return 0;
}
/*
pi@RaspPi4:~/Coding/CPP_folder/in_easy_steps $ ./override 
Hello!
(Base Class) I wonder which method will be used ???
(child class)Hola!
(Base Class) Que pasa mi amigo?
pi@RaspPi4:~/Coding/CPP_folder/in_easy_steps $ 
*/
