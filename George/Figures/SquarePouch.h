#pragma once

#include "Point.h"
#include "Figure.h"

class SquarePouch
{
public:
	Point BottomLeftCorner, TopRightCorner;
	float Height, Width, Diagonal;
	FigureTypes FigureType;
};