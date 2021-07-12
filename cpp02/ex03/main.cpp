#include "Fixed.hpp"
#include "Point.hpp"

int main( void ) {
    if (bsp(Point(0,0), Point(5,0), Point(0,5), Point(1,1))) //внутри 
    		std::cout << "Inside!" << std::endl;
    	else
    		std::cout << "Outside!" << std::endl;
    if (bsp(Point(0,0), Point(5,0), Point(0,5), Point(0,1))) // снаружи, т.к. по сабжу на грани = снаружи
    		std::cout << "Inside!" << std::endl;
    	else
    		std::cout << "Outside!" << std::endl;
    if (bsp(Point(0,0), Point(5,0), Point(0,5), Point(-1,1)))
    		std::cout << "Inside!" << std::endl;
    	else
    		std::cout << "Outside!" << std::endl;
    	return 0;
return 0;
}