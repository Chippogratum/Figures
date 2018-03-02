#pragma once
#include <string>
#include "../Other/Point.h"
#include "../Figures/Figure.h"

using namespace std;

class CommonPouch
{
public:
	CommonPouch();
	Point BottomLeft, TopRight, Center;
	float Height, Width, Radius, Diagonal;
	FigureTypes FigureType;
};
