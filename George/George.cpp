#include <iostream>
#include <iomanip>
#include "Other/Point.h"
#include "Figures/Figure2D.h"
#include "Figures/Rectangle.h"
#include "Figures/Square.h"
#include "Figures/Circle.h"
#include "Other/FigureFactory.h"
#include "Pouches/PouchSource/IPouchSource.h"

using namespace std;

int main()
{
	
	////////IPouchSource
	////////FigureFactory::CreateFigure()


















	//for (int i = 0; i < 2; i++)
	//{
	//	try
	//	{
	//		cout << FigureFactory::CreateRectangle(ConsolePouchSource())->ToString(); // создать любую фигуру, а не прямоугольник
	//	}
	//	catch (exception error)
	//	{
	//		cout << error.what();
	//	}
	//}


	// 1 прямоугольник по углам
	Rectangle recPoint(Point(0, 0), Point(4, 3));
	cout << recPoint.ToString();

	// 2 прямоугольник по сторонам
	Rectangle recCorner(3.5, 4.5);
	cout << recCorner.ToString();
	
	// 3 квадрат по стороне
	Square squSide(3.5);
	cout << squSide.ToString();
	
	// 4 квадрат по диагонале
	Square squDiagonal(Point(0, 0), 8.5);
	cout << squDiagonal.ToString();
	
	// 5 квадрат по углам
	Square squPoint(Point(0, 0), Point(5, 5));
	cout << squPoint.ToString();
	
	// 6 круг
	Circle cir(7);
	cout << cir.ToString();
	
	// 7 круг с центром
	Circle cirCenter(Point(60, 70), 17.5);
	cout << cirCenter.ToString();
	
    return 0;
}


//#include <iostream>
//#include "IPouchSource.h"
//#include "CommonPouch.h"
//
//using namespace std;
//
//CommonPouch ConsolePouchSource()
//{
//	int figure;
//	cout << "Select figure type:" << endl << "Rectangle - " << '\t' << '1' << endl <<
//		"Square - " << '\t' << '2' << endl << "Circle - " << '\t' << '3' << endl << "Enter cod: ";
//	cin >> figure;
//
//	if (figure == 1) // ПЯРМОУГОЛЬНИК
//	{
//		int usingMethod;
//		cout << "Select coords of corners or value of sides:" << endl << "Coords - " << '\t' << '1' << endl <<
//			"Sides - " << '\t' << '2' << endl << "Enter cod: ";
//		cin >> usingMethod;
//
//		if (usingMethod == 1)
//		{
//			CommonPouch pouch;
//			pouch.FigureType = rectangle;
//			pouch.WereCoordinatesGiven = true;
//			cout << "Specify coord of bottom left corner (x/y): ";
//			cin >> pouch.BottomLeft.X >> pouch.BottomLeft.Y;
//			cout << "Specify coord of top right corner (x/y): ";
//			cin >> pouch.TopRight.X >> pouch.TopRight.Y;
//			cout << endl;
//
//			if (pouch.TopRight.X <= pouch.BottomLeft.X || pouch.TopRight.Y <= pouch.BottomLeft.Y)
//				throw exception("Coords invalid value!");
//			// проверка яаляется ли фигура с введенными параметрами квадратом
//			if (pouch.TopRight.X - pouch.BottomLeft.X == pouch.TopRight.Y - pouch.BottomLeft.Y)
//				pouch.FigureType = square;
//
//			return pouch;
//		}
//		if (usingMethod == 2)
//		{
//			CommonPouch pouch;
//			pouch.FigureType = rectangle;
//			pouch.WereCoordinatesGiven = false;
//			cout << "Specify height: ";
//			cin >> pouch.Height;
//			cout << "Specify width: ";
//			cin >> pouch.Width;
//			cout << endl;
//
//			if (pouch.Height <= 0 || pouch.Width <= 0)
//				throw exception("Sides invalid value!");
//			// проверка яаляется ли фигура с введенными параметрами квадратом
//			if (pouch.Height == pouch.Width)
//				pouch.FigureType = square;
//
//			return pouch;
//		}
//
//		throw exception("Wrong choice!");
//	}
//
//	if (figure == 2) // КВАДРАТ
//	{
//		int usingMethod;
//		cout << "Select side, corner coords and diagonal or coords of corners:" << endl << "Side - " << '\t' << '1' << endl <<
//			"Diagonal - " << '\t' << '2' << endl << "Coords - " << '\t' << '3' << endl << "Enter cod: ";
//		cin >> usingMethod;
//
//		if (usingMethod == 1)
//		{
//			CommonPouch pouch;
//			pouch.FigureType = square;
//			pouch.WereCoordinatesGiven = false;
//			cout << "Side value: ";
//			cin >> pouch.BottomLeft.X >> pouch.BottomLeft.Y;
//			cout << "Specify coord of top right corner (x/y): ";
//			cin >> pouch.TopRight.X >> pouch.TopRight.Y;
//			cout << endl;
//
//			if (pouch.TopRight.X <= pouch.BottomLeft.X || pouch.TopRight.Y <= pouch.BottomLeft.Y)
//				throw exception("Coords invalid value!");
//
//			return pouch;
//		}
//		if (usingMethod == 2)
//		{
//			CommonPouch pouch;
//			pouch.WereCoordinatesGiven = false;
//			cout << "Specify height: ";
//			cin >> pouch.Height;
//			cout << "Specify width: ";
//			cin >> pouch.Width;
//			cout << endl;
//
//			if (pouch.Height <= 0 || pouch.Width <= 0)
//				throw exception("Sides invalid value!");
//
//			return pouch;
//		}
//		if (usingMethod == 3)
//		{
//			CommonPouch pouch;
//			pouch.WereCoordinatesGiven = false;
//			cout << "Specify height: ";
//			cin >> pouch.Height;
//			cout << "Specify width: ";
//			cin >> pouch.Width;
//			cout << endl;
//
//			if (pouch.Height <= 0 || pouch.Width <= 0)
//				throw exception("Sides invalid value!");
//
//			return pouch;
//		}
//
//		throw exception("Wrong choice!");
//	}
//
//	if (figure == 3) // КРУГ
//	{
//		int usingMethod;
//		cout << "Select coords or sides:" << endl << "Coords - " << '\t' << '1' << endl <<
//			"Sides - " << '\t' << '2' << endl << "Enter cod: ";
//		cin >> usingMethod;
//
//		if (usingMethod == 1)
//		{
//			CommonPouch pouch;
//			pouch.FigureType = rectangle;
//			pouch.WereCoordinatesGiven = true;
//			cout << "Specify coord of bottom left corner (x/y): ";
//			cin >> pouch.BottomLeft.X >> pouch.BottomLeft.Y;
//			cout << "Specify coord of top right corner (x/y): ";
//			cin >> pouch.TopRight.X >> pouch.TopRight.Y;
//			cout << endl;
//
//			if (pouch.TopRight.X <= pouch.BottomLeft.X || pouch.TopRight.Y <= pouch.BottomLeft.Y)
//				throw exception("Coords invalid value!");
//
//			return pouch;
//		}
//		if (usingMethod == 2)
//		{
//			CommonPouch pouch;
//			pouch.WereCoordinatesGiven = false;
//			cout << "Specify height: ";
//			cin >> pouch.Height;
//			cout << "Specify width: ";
//			cin >> pouch.Width;
//			cout << endl;
//
//			if (pouch.Height <= 0 || pouch.Width <= 0)
//				throw exception("Sides invalid value!");
//
//			return pouch;
//		}
//
//		throw exception("Wrong choice!");
//	}
//
//
//}