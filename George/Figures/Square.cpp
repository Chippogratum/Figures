#include "Square.h"
#include <cmath>
#include <iostream>
#include <sstream>
#include <string>
#include <iomanip>

using namespace std;


Square::Square(float height) : Rectangle(height, height)
{
	Height = height;
	Width = Height;
	Diagonal = sqrt(2)*Height;
	FigureType = square;
	WereCoordinatesGiven = false;
}

Square::Square(Point bottomLeft, float diagonal) : Rectangle(bottomLeft, bottomLeft)
{
	BottomLeftCorner.X = bottomLeft.X;
	BottomLeftCorner.Y = bottomLeft.Y;
	Diagonal = diagonal;
	Height = sqrt((Diagonal*Diagonal) / 2);
	Width = Height;
	TopRightCorner.X = BottomLeftCorner.X + Height;
	TopRightCorner.Y = BottomLeftCorner.Y + Height;
	FigureType = square;
	WereCoordinatesGiven = true;
}

Square::Square(Point bottomLeft, Point topRight) : Rectangle(bottomLeft, topRight)
{
	Width = Height;
	Diagonal = sqrt(2)*Height;
	FigureType = square;
	WereCoordinatesGiven = true;
}

float Square::Area()
{
	return Height*Height;
}

float Square::Perimeter()
{
	return Height * 4;
}

string Square::ToString()
{
	ostringstream stringStream;

	stringStream << "Figure type: Square(" << FigureType << ')' << endl << "Side: " << fixed << setprecision(2) << Height <<
		" Diagonal: " << Diagonal << endl << "Area: " << Area() << " Perimeter: " << Perimeter() << endl <<
		"Bottom left corner (x/y): " << BottomLeftCorner.X << '/' << BottomLeftCorner.Y << endl <<
		"Top right corner (x/y): " << TopRightCorner.X << '/' << TopRightCorner.Y << endl << endl;

	string copyOfStr = stringStream.str();

	return copyOfStr;
}
