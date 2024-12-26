#include "shape.h"
#include "triangle.h"
#include <iostream>


int main() 
{
	Triangle triangle(2, 10);
	std::cout << "The area of the triangle is " << triangle.get_area() << std::endl;

	Triangle pTriangle(2, 10);
	std::cout << "The area of the triangle is " << pTriangle.get_area() << std::endl;


	return 0;
}
