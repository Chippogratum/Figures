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

void SavePouchToFile(CommonPouch);
void DataOutput(Figure2D*);

int main()
{
	//IPouchSource* interface; // как задействовать полиморфизм для выбора нужного интерфейса? ДОЛЖЕН ПРИНИМАТЬСЯ?
	
	ConsolePouchSource interface;
	//ConsolePouchSource consoleInterface; // перемеиновать
	CommonPouch pouch; // создание мешочка 
	Figure2D* figure; // создание фигуры 

	pouch = interface.GetPouch(); // получение мешочка из файла (ИНТЕРФЕЙС)
	SavePouchToFile(pouch); // запись мешочка в файл
	figure = FigureFactory::CreateFigure(pouch); // определение фигуры 
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

void SavePouchToFile(CommonPouch pouch) // отправка мешочка в файл
{
	//cout << "Enter the name of the source file: "; // определение имени файла-источника с консоли
	//cin >> fileNameOut; //
	ofstream file;
	string fileName = "Pouch.txt"; // имя файла, на который записывается мешочек

	file.open(fileName, std::ofstream::out); // содержимое файла будет перезаписано
	file.write((char*)&pouch, sizeof(CommonPouch)); // запись информации размером с мешочек из полученного мешочка в файл
	file.close(); // закрытие файла
}
