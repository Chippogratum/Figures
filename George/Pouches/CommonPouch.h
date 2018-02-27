#pragma once
#include "../Other/Point.h"
#include "../Figures/Figure.h"

class CommonPouch
{
public:
	Point BottomLeft, TopRight, Center;
	float Height, Width, Radius, Diagonal;
	FigureTypes FigureType;
	bool IsSquareDiagonalKnown;
};