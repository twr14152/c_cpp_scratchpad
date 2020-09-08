#include "Rectangle.h"
#include <iostream>

int main()
{
//	int x;
//	int y{};
//	int z{1};

	Rectangle unitialized;   // do not do...
	Rectangle value{};	 // preffered over above
	Rectangle aggregate{ 4, 7 };
	Rectangle const blue{ 4, 9 };  // make it a constant value
	value.resize(5, 5);
	aggregate.resize(1, 2);

	int area_of_value{ value.area() };
	int area_of_aggregate{ aggregate.area() };
	int area_of_blue{ blue.get_area() };

	//value._width = 2;
	//value._height = 3;
	
	std::cout << "The area of rectangle aggregate is: " << aggregate.area() << std::endl;
	std::cout << "The area of rectangle value is: " << value.area() << std::endl;
	std::cout << "The area of rectangle blue is: " << blue.get_area() << std::endl;
	return 0;
}

/*
pi@RaspPi4:~/Coding/CPP_folder/microsoft_CPP_tut/ObjectModel $ ./object_1 
The area of rectangle aggregate is: 2
The area of rectangle value is: 25
The area of rectangle blue is: 36
pi@RaspPi4:~/Coding/CPP_folder/microsoft_CPP_tut/ObjectModel $ 

*/
