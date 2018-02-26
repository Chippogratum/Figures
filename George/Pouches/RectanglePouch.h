#pragma once

#include "../Other/Point.h"
#include "../Figures/Figure.h"

class RectanglePouch
{
public:
	Point BottomLeftCorner, TopRightCorner;
	float Height, Width, Diagonal;
	FigureTypes FigureType;
};