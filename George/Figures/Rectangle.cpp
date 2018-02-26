#include "Rectangle.h"
#include <cmath>
#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>

using namespace std;

Rectangle::Rectangle(float height, float width)
{
	Height = height;
	Width = width;
	Diagonal = sqrt(Height*Height + Width*Width);
	FigureType = rectangle;
	WereCoordinatesGiven = false;
}

Rectangle::Rectangle(Point bottomLeft, Point topRight)
{
	BottomLeftCorner.X = bottomLeft.X;
	BottomLeftCorner.Y = bottomLeft.Y;
	TopRightCorner.X = topRight.X;
	TopRightCorner.Y = topRight.Y;
	Height = (TopRightCorner.X - BottomLeftCorner.X);
	Width = (TopRightCorner.Y - BottomLeftCorner.Y);
	Diagonal = sqrt(Height*Height + Width*Width);
	FigureType = rectangle;
	WereCoordinatesGiven = true;
}

float Rectangle::Area()
{
	return Height * Width;
}

float Rectangle::Perimeter()
{
	return Height * 2 + Width * 2;
}

string Rectangle::ToString()
{
	if (WereCoordinatesGiven)
	{
		ostringstream stringStream;

		stringStream << "Figure type: Rectangle (" << FigureType << ')' << endl << 
			"Height: " << fixed << setprecision(2) << Height << " Width: " << Width <<
			" Diagonal: " << Diagonal << endl << "Area: " << Area() << " Perimeter: " << Perimeter() << endl <<
			"Bottom left corner (x/y): " << BottomLeftCorner.X << '/' << BottomLeftCorner.Y << endl <<
			"Top right corner (x/y): " << TopRightCorner.X << '/' << TopRightCorner.Y << endl << endl;

		string copyOfStr = stringStream.str();

		return copyOfStr;
	}

	ostringstream stringStream;

	stringStream << "Figure type: Rectangle (" << FigureType << ')' << endl <<
		"Height: " << fixed << setprecision(2) << Height << " Width: " << Width <<
		" Diagonal: " << Diagonal << endl << "Area: " << Area() << " Perimeter: " << Perimeter() << endl << endl;

	string copyOfStr = stringStream.str();

	return copyOfStr;
}
