#pragma once
#include "../Other/Point.h"
#include "../Figures/Figure.h"

class CommonPouch
{
public:
	CommonPouch();
	Point BottomLeft, TopRight, Center;
	float Height, Width, Radius, Diagonal;
	FigureTypes FigureType;
};