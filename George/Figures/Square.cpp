﻿#include "Square.h"
#include <cmath>
#include <iostream>
#include <sstream>
#include <string>
#include <iomanip>

using namespace std;

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
}

Square::Square(Point bottomLeft, Point topRight) : Rectangle(bottomLeft, topRight)
{
	Width = Height;
	Diagonal = static_cast<float>(sqrt(2)*Height); // минус warning: для Diagonal присваивается значение её типа (float), а не иного (double)
	FigureType = square;
}

double Square::Area()
{
	return Height*Height;
}

double Square::Perimeter()
{
	return Height * 4;
}

string Square::ToString()
{
	ostringstream stringStream;

	stringStream << "Figure type: Square(" << FigureType << ')' << endl << "Side: " << fixed << setprecision(2) << Height <<
		" Diagonal: " << Diagonal << endl << "Area: " << Area() << " Perimeter: " << Perimeter() << endl <<
		"Bottom left corner (x/y): " << BottomLeftCorner.X << '/' << BottomLeftCorner.Y << endl <<
		"Top right corner (x/y): " << TopRightCorner.X << '/' << TopRightCorner.Y << endl;

	string copyOfStr = stringStream.str();

	return copyOfStr;
}
