#include <iostream>
#include "Figures/Point.h"
#include "Figures/Figure.h"
#include "Figures/Figure2D.h"
#include "Figures/Rectangle.h"
#include "Figures/Square.h"
#include "Figures/Circle.h"
#include <iomanip>
using namespace std;


int main()
{
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

