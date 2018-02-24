#pragma once

#include "Point.h"
#include "Figure.h"

class CommonPouch
{
public:
	Point BottomLeft, TopRight, Center;
	float Height, Width, Radius, Diagonal;
	FigureTypes FigureType;
};