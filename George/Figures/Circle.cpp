#include "Circle.h"
#include <iostream>
#include <sstream>
#include <string>
#include <cmath>
#include <iomanip>
using namespace std;

const static float pi = 3.14159;

Circle::Circle(Point center, float radius)
{
	Center = center;
	Radius = radius;
	FigureType = circle;
}

float Circle::Area()
{
	return pi*(Radius*Radius);
}

float Circle::Perimeter()
{
	return 2*pi*Radius;
}

string Circle::ToString()
{
	ostringstream stringStream;

	stringStream << "Figure type: Circle(" << FigureType << ')' << fixed << setprecision(2) << endl << "Radius: " << Radius <<
		" Area: " << Area() << " Perimeter: " << Perimeter() << endl <<
		"Center (x/y): " << Center.X << '/' << Center.Y << endl;

	string copyOfStr = stringStream.str();

	return copyOfStr;;
}
