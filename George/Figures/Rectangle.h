#pragma once

#include "Figure2D.h"
#include "Point.h"

class Rectangle : public Figure2D
{
protected:
	Point BottomLeftCorner, TopRightCorner;
	float Height, Width, Diagonal;
public:
	Rectangle(float, float);
	Rectangle(Point, Point);
	float Area() override;
	float Perimeter() override;
	string ToString() override;
};
