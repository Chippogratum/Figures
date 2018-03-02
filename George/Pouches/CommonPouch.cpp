#include "CommonPouch.h"
#include <string>

using namespace std;

CommonPouch::CommonPouch()
{
	BottomLeft = TopRight = Center = Point(0, 0);
	Height = Width = Radius = Diagonal = 0;
	FigureType = undefinedFigure;
}
