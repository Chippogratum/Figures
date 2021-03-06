#include <iostream>
#include "ConsolePouchSource.h"
#include "../CommonPouch.h"

using namespace std;

CommonPouch ConsolePouchSource::GetPouch()
{
	int figureCod;
	cout << "Select figure type:" << endl << "Rectangle - " << '\t' << '1' << endl <<
		"Square - " << '\t' << '2' << endl << "Circle - " << '\t' << '3' << endl << "Enter cod: ";
	cin >> figureCod;

	if (figureCod == 1) // ПРЯМОУГОЛЬНИК
	{
		Point testingBottomLeft, testingTopRight;

		cout << "Specify coord of bottom left corner (x/y): ";
		cin >> testingBottomLeft.X >> testingBottomLeft.Y;
		cout << "Specify coord of top right corner (x/y): ";
		cin >> testingTopRight.X >> testingTopRight.Y;
		cout << endl;

		if (testingTopRight.X <= testingBottomLeft.X || testingTopRight.Y <= testingBottomLeft.Y)
			throw exception("Coords invalid value!");

		CommonPouch pouch;
		pouch.FigureType = rectangle;
		pouch.BottomLeft = testingBottomLeft;
		pouch.TopRight = testingTopRight;

		// проверка яаляется ли фигура с введенными параметрами квадратом
		if (pouch.TopRight.X - pouch.BottomLeft.X == pouch.TopRight.Y - pouch.BottomLeft.Y)
		{
			CommonPouch pouch2;
			pouch2.FigureType = square;
			pouch2.BottomLeft = testingBottomLeft;
			pouch2.TopRight = testingTopRight;

			return pouch2;
		}
			

		return pouch;
	}

	if (figureCod == 2) // КВАДРАТ
	{
		int usingMethod;
		cout << "Is the diagonal known?" << endl << "Yes - " << '\t' << '1' << endl <<
			"No - " << '\t' << '2' << endl << "Enter cod: ";
		cin >> usingMethod;

		if (usingMethod == 1) // дагональ
		{
			float testingDiagonal;
			Point testingBottomLeft;

			cout << "Specify coord of bottom left corner (x/y): ";
			cin >> testingBottomLeft.X >> testingBottomLeft.Y;
			cout << "Specify diagonal: ";
			cin >> testingDiagonal;
			cout << endl;

			if (testingDiagonal <= 0)
				throw exception("Diagonal invalid value!");

			CommonPouch pouch;
			pouch.FigureType = square;
			pouch.BottomLeft = testingBottomLeft;
			pouch.Diagonal = testingDiagonal;

			return pouch;
		}

		if (usingMethod == 2) // углы
		{
			Point testingBottomLeft, testingTopRight;

			cout << "Specify coord of bottom left corner (x/y): ";
			cin >> testingBottomLeft.X >> testingBottomLeft.Y;
			cout << "Specify coord of top right corner (x/y): ";
			cin >> testingTopRight.X >> testingTopRight.Y;
			cout << endl;

			if (testingTopRight.X <= testingBottomLeft.X || testingTopRight.Y <= testingBottomLeft.Y)
				throw exception("Coords invalid value!");
			if (testingTopRight.X - testingBottomLeft.X != testingTopRight.Y - testingBottomLeft.Y)
				throw exception("Coords invalid value!");

			CommonPouch pouch;
			pouch.FigureType = square;
			pouch.BottomLeft = testingBottomLeft;
			pouch.TopRight = testingTopRight;

			return pouch;
		}
		
		throw exception("Wrong choice!");
	}

	if (figureCod == 3) // КРУГ
	{
		float testingRadius;
		Point testingCenter;

		cout << "Specify coord of center (x/y): ";
		cin >> testingCenter.X >> testingCenter.Y;
		cout << "Specify radius: ";
		cin >> testingRadius;
		cout << endl;

		if (testingRadius <= 0)
			throw exception("Radius invalid value!");

		CommonPouch pouch;
		pouch.FigureType = circle;
		pouch.Center = testingCenter;
		pouch.Radius = testingRadius;

		return pouch;
	}

	throw exception("Wrong choice!");
}

