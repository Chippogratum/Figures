#pragma once

#include "Figure2D.h"
#include "Point.h"

class Circle : public Figure2D
{
protected:
	Point Center;
	float Radius;
public:
	Circle(float radius);
	Circle(Point center, float radius);
	float Area() override;
	float Perimeter() override;
	string ToString() override;
};
