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
			
		}
	case square:
		{
			
		}
	case circle:
		{
			
		}
	case undefinedFigure:
		{
			throw std::exception("Undefined figure!");
		}
	//default:
	//	{
	//		throw std::exception("Error!");
	//	}
	}




}

Rectangle * FigureFactory::CreateRectangle(CommonPouch pouch)
{
	if (pouch.WereCoordinatesGiven)
		return new Rectangle(Point(pouch.BottomLeft.X, pouch.BottomLeft.Y), Point(pouch.TopRight.X, pouch.TopRight.Y));
	return new Rectangle(pouch.Height, pouch.Width);
}

Rectangle* FigureFactory::CreateRectangleUsingCorners(CommonPouch pouch)
{
	return new Rectangle(Point(pouch.BottomLeft.X, pouch.BottomLeft.Y), Point(pouch.TopRight.X, pouch.TopRight.Y));
}

Rectangle* FigureFactory::CreateRectangleUsingSides(CommonPouch pouch)
{
	return new Rectangle(pouch.Height, pouch.Width);
}

Square* FigureFactory::CreateSquareUsingSides(CommonPouch pouch)
{
	return new Square(pouch.Height);
}

Square* FigureFactory::CreateSquareUsingDiagonal(CommonPouch pouch)
{
	return new Square(Point(pouch.BottomLeft.X, pouch.BottomLeft.Y), pouch.Diagonal);
}

Square* FigureFactory::CreateSquareUsingCorners(CommonPouch pouch)
{
	return new Square(Point(pouch.BottomLeft.X, pouch.BottomLeft.Y), Point(pouch.TopRight.X, pouch.TopRight.Y));
}

Circle* FigureFactory::CreateCircleWithoutCenter(CommonPouch pouch)
{
	return new Circle(pouch.Radius);
}

Circle* FigureFactory::CreateCircleWithCenter(CommonPouch pouch)
{
	return new Circle(Point(pouch.Center.X, pouch.Center.Y), pouch.Radius);
}
