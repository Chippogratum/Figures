#pragma once

#include "Figure.h"
#include <string>

using std::string;

class Figure2D
{
public:
	virtual float Area() abstract;
	virtual float Perimeter() abstract;
	virtual string ToString() abstract;
	FigureTypes FigureType;
};
