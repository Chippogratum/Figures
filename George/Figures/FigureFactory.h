#pragma once

#include "CommonPouch.h"
#include "Figure2D.h"
#include "Rectangle.h"
#include "Square.h"
#include "Circle.h"
#include "RectanglePouch.h"
#include "SquarePouch.h"
#include "CirclePouch.h"

class FigureFactory
{
public:
	//Figure2D* CreateFigure(RectanglePouch);
	//Figure2D* CreateFigure(SquarePouch);
	//Figure2D* CreateFigure(CirclePouch);

	Rectangle* CreateRectangleUsingCorners(CommonPouch);
	Rectangle* CreateRectangleUsingSides(CommonPouch);
	Square* CreateSquareUsingCorners(CommonPouch);
	Square* CreateSquareUsingSides(CommonPouch);
	Square* CreateSquareUsingDiagonal(CommonPouch);
	Circle* CreateCircleWithoutCenter(CommonPouch);
	Circle* CreateCircleWithCenter(CommonPouch);
};
