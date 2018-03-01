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
IPouchSource* GetPouchSource();

int main()
{
	for (int count = 0; count < 3; count++)
	{
		try
		{
			IPouchSource* PouchSourse = GetPouchSource(); // 1) установка источника мешочка
			CommonPouch pouch = PouchSourse->GetPouch(); // 2) получение мешочка из источника
			Figure2D* figure = FigureFactory::CreateFigure(pouch); // 3) создание фигуры из мешочка
			DataOutput(figure); // 4) вывод информации о фигуре
		}
		catch (exception error)
		{
			cout << error.what() << endl << endl;
		}
	}
		
    return 0;
}

void DataOutput(Figure2D* figure)
{
	cout << figure->ToString() << endl;
}

IPouchSource* GetPouchSource()
{
	int source;
	cout << "Console - 1\tFile - 2" << endl << "Select the source of the pouch: ";
	cin >> source;
	cout << endl;
	if (source==1)
		return new ConsolePouchSource;
	if (source == 2)
		return new FilePouchSource;
	throw exception("Wrong choice!");
}

void SavePouchToFile(CommonPouch pouch) // отправка мешочка в файл
{
	string fileName;
	cout << "Enter the filename for the data of the pouch: "; // определение имени файла-источника с консоли
	cin >> fileName;
	cout << endl;

	ofstream file;
	file.open(fileName, std::ofstream::out); // содержимое файла будет перезаписано
	file.write((char*)&pouch, sizeof(CommonPouch)); // запись мешочка в файл
	file.close(); // закрытие файла
}
