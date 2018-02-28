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
	//IPouchSource interface; // как задействовать полиморфизм для выбора нужного интерфейса? ДОЛЖЕН ПРИНИМАТЬСЯ
	FilePouchSource fileInterface;
	ConsolePouchSource consoleInterface;
	CommonPouch pouch;
	Figure2D* figure;
	// УБРАТЬ ЛИШНЕЕ ПОЛУЧЕНИЕ МЕШОЧКА ИЗ КОНСОЛИ
	FilePouchSource::SavePouchToFile(consoleInterface.GetPouch()); // запись мешочка в файл
	pouch = fileInterface.GetPouch();
	figure = FigureFactory::CreateFigure(pouch);
	DataOutput(figure); // вывод инфо фигуры созданной с мешочка из файла

	//for (int count = 0; count < 3; count++)
	//{
	//	ConsolePouchSource interface;
	//	//FilePouchSource interface;
	//	try
	//	{
	//		DataOutput(FigureFactory::CreateFigure(interface.GetPouch()));
	//	}
	//	catch (exception error)
	//	{
	//		cout << error.what() << endl << endl;
	//	}
	//}
		
    return 0;
}

void DataOutput(Figure2D* figure)
{
	cout << figure->ToString() << endl;
}
