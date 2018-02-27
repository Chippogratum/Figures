#pragma once

#include "../Figures/Figure2D.h"
#include "../Figures/Rectangle.h"
#include "../Figures/Square.h"
#include "../Figures/Circle.h"
#include "../Pouches/CommonPouch.h"
#include "../Pouches/RectanglePouch.h"
#include "../Pouches/SquarePouch.h"
#include "../Pouches/CirclePouch.h"

class FigureFactory
{
public:
	//Figure2D* CreateFigure(RectanglePouch);
	//Figure2D* CreateFigure(SquarePouch);
	//Figure2D* CreateFigure(CirclePouch);

	static Figure2D* CreateFigure(CommonPouch);
	static Rectangle* CreateRectangle(CommonPouch);
	static Square* CreateSquareUsingCorners(CommonPouch);
	static Square* CreateSquareUsingDiagonal(CommonPouch);
	static Circle* CreateCircle(CommonPouch);
};
