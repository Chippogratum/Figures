#pragma once
#include "Figure2D.h"
#include "../Other/Point.h"

class Circle : public Figure2D
{
protected:
	Point Center;
	float Radius;
public:
	Circle(Point, float);
	double Area() override;
	double Perimeter() override;
	string ToString() override;
};
