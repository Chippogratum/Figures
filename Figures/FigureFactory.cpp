#include "Figure2D.h"
#include "FigureFactory.h"
#include "CommonPouch.h"
#include "Rectangle.h"
#include "Square.h"
#include "Circle.h"




Rectangle * FigureFactory::CreateRectangleUsingCorners(CommonPouch pouch)
{
	return new Rectangle(Point(pouch.BottomLeft.X, pouch.BottomLeft.Y), Point(pouch.TopRight.X, pouch.TopRight.Y));
}

Rectangle * FigureFactory::CreateRectangleUsingSides(CommonPouch pouch)
{
	return new Rectangle(pouch.Height, pouch.Width);
}

Square * FigureFactory::CreateSquareUsingSides(CommonPouch pouch)
{
	return new Square(pouch.Height);
}

Square * FigureFactory::CreateSquareUsingDiagonal(CommonPouch pouch)
{
	return new Square(Point(pouch.BottomLeft.X, pouch.BottomLeft.Y), pouch.Diagonal);
}

Square * FigureFactory::CreateSquareUsingCorners(CommonPouch pouch)
{
	return new Square(Point(pouch.BottomLeft.X, pouch.BottomLeft.Y), Point(pouch.TopRight.X, pouch.TopRight.Y));
}

Circle * FigureFactory::CreateCircleWithoutCenter(CommonPouch pouch)
{
	return new Circle(pouch.Radius);
}

Circle * FigureFactory::CreateCircleWithCenter(CommonPouch pouch)
{
	return new Circle(Point(pouch.Center.X, pouch.Center.Y), pouch.Radius);
}
