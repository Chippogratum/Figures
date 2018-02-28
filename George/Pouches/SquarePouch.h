#pragma once
#include "../Other/Point.h"

class SquarePouch
{
public:
	Point BottomLeftCorner, TopRightCorner;
	float Height, Width, Diagonal;
	FigureTypes FigureType;
};