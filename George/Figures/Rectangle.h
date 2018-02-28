#pragma once
#include "../Other/Point.h"
#include "Figure2D.h"

class Rectangle : public Figure2D
{
protected:
	Point BottomLeftCorner, TopRightCorner;
	float Height, Width, Diagonal;
public:
	Rectangle(Point, Point);
	float Area() override;
	float Perimeter() override;
	string ToString() override;
};
