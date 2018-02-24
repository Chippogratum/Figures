#pragma once

#include "Point.h"
#include "Figure.h"

class RectanglePouch
{
public:
	Point BottomLeftCorner, TopRightCorner;
	float Height, Width, Diagonal;
	FigureTypes FigureType;
};