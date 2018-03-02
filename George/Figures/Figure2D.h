#pragma once

#include "Figure.h"
#include <string>

using std::string;

class Figure2D
{
public:
	virtual double Area() abstract;
	virtual double Perimeter() abstract;
	virtual string ToString() abstract;
	FigureTypes FigureType;
};
