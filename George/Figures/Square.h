#pragma once
#include "../Other/Point.h"
#include "Rectangle.h"

class Square : public Rectangle
{
public:
	Square(Point, Point);
	Square(Point, float);
	float Area() override;
	float Perimeter() override;
	string ToString() override;
};
