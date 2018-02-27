#include <iostream>
#include <iomanip>
#include <fstream>
#include "Other/Point.h"
#include "Figures/Figure2D.h"
#include "Figures/Rectangle.h"
#include "Figures/Square.h"
#include "Figures/Circle.h"
#include "Other/FigureFactory.h"
#include "Pouches/PouchSource/IPouchSource.h"
#include "Pouches/PouchSource/ConsolePouchSource.h"
#include "Pouches/PouchSource/FilePouchSource.h"

using namespace std;

void DataOutput(Figure2D*);

int main()
{
	try
	{
		ConsolePouchSource interface;
		//FilePouchSource interface;

		for (int count = 0; count < 3; count++)
		{
			DataOutput(FigureFactory::CreateFigure(interface.GetPouch()));
		}
	}
	catch (exception error)
	{
		cout << error.what() << endl;
	}
	
	
    return 0;
}

void DataOutput(Figure2D* figure)
{
	cout << figure->ToString() << endl;
}


//for (int i = 0; i < 2; i++)
//{
//	try
//	{
//		cout << FigureFactory::CreateRectangle(ConsolePouchSource::GetPouch())->ToString(); // создать любую фигуру, а не прямоугольник
//	}
//	catch (exception error)
//	{
//		cout << error.what();
//	}
//}

//// 1 прямоугольник по углам
//Rectangle recPoint(Point(0, 0), Point(4, 3));
//cout << recPoint.ToString();
//// 2 прямоугольник по сторонам
//Rectangle recCorner(3.5, 4.5);
//cout << recCorner.ToString();
//// 3 квадрат по стороне
//Square squSide(3.5);
//cout << squSide.ToString();
//// 4 квадрат по диагонале
//Square squDiagonal(Point(0, 0), 8.5);
//cout << squDiagonal.ToString();
//// 5 квадрат по углам
//Square squPoint(Point(0, 0), Point(5, 5));
//cout << squPoint.ToString();
//// 6 круг
//Circle cir(7);
//cout << cir.ToString();
//// 7 круг с центром
//Circle cirCenter(Point(60, 70), 17.5);
//cout << cirCenter.ToString();