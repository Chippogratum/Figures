#include "../Figures/Figure2D.h"
#include "../Pouches//CommonPouch.h"
#include "../Figures/Rectangle.h"
#include "../Figures/Square.h"
#include "../Figures/Circle.h"
#include "FigureFactory.h"


Figure2D * FigureFactory::CreateFigure(CommonPouch pouch)
{
	switch (pouch.FigureType)
	{
	case rectangle:
		{
			return new Rectangle(Point(pouch.BottomLeft.X, pouch.BottomLeft.Y), Point(pouch.TopRight.X, pouch.TopRight.Y));
		}
	case square:
		{
			if(pouch.IsSquareDiagonalKnown)
				return new Square(Point(pouch.BottomLeft.X, pouch.BottomLeft.Y), pouch.Diagonal);
			return new Square(Point(pouch.BottomLeft.X, pouch.BottomLeft.Y), Point(pouch.TopRight.X, pouch.TopRight.Y));
		}
	case circle:
		{
			return new Circle(Point(pouch.Center.X, pouch.Center.Y), pouch.Radius);
		}
	case undefinedFigure:
		{
			throw std::exception("Undefined figure!");
		}
	default:
		{
			throw std::exception("Error!");
		}
	}
}

Rectangle * FigureFactory::CreateRectangle(CommonPouch pouch)
{
	return new Rectangle(Point(pouch.BottomLeft.X, pouch.BottomLeft.Y), Point(pouch.TopRight.X, pouch.TopRight.Y));
}

Square* FigureFactory::CreateSquareUsingDiagonal(CommonPouch pouch)
{
	return new Square(Point(pouch.BottomLeft.X, pouch.BottomLeft.Y), pouch.Diagonal);
}

Square* FigureFactory::CreateSquareUsingCorners(CommonPouch pouch)
{
	return new Square(Point(pouch.BottomLeft.X, pouch.BottomLeft.Y), Point(pouch.TopRight.X, pouch.TopRight.Y));
}

Circle* FigureFactory::CreateCircle(CommonPouch pouch)
{
	return new Circle(Point(pouch.Center.X, pouch.Center.Y), pouch.Radius);
}
