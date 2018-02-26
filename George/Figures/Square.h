#pragma once

#include "Rectangle.h"

class Square : public Rectangle
{
	bool WereDiagonalGiven;
public:
	Square(float height);
	Square(Point bottomLeft, float diagonal);
	Square(Point bottomLeft, Point topRight);
	float Area() override;
	float Perimeter() override;
	string ToString() override;
};
