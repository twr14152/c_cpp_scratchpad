#include <iostream>
using namespace std;

//Notice that there is no colon after base class
class Polygon 
{
	protected:
	int width, height ;
	public:
	void setValues(int w, int h){width = w, height = h;}
};
//Notice the (':') after the derived class
class Rectangle: public Polygon
{
	public:
		int area(){return (width*height);}
};
//Notice the (':') after the derived class
class Triangle: public Polygon
{
	public:
		int area(){return((width*height)/2);}
};

int main()
{
	Rectangle rect;
	Triangle trgl;
	rect.setValues(4,5);
	trgl.setValues(4,5);
	cout << "Rectangle area: " << rect.area() << endl;
	cout << "Triangle area: " << trgl.area() << endl;
	return 0;
}


/*
pi@RaspPi4:~/Coding/CPP_folder/in_easy_steps $ ./derived 
Rectangle area: 20
Triangle area: 10
pi@RaspPi4:~/Coding/CPP_folder/in_easy_steps $ 
*/
