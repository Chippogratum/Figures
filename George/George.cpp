#include <iostream>
#include <iomanip>
#include <fstream>
#include "Figures/Figure2D.h"
#include "Other/FigureFactory.h"
#include "Pouches/PouchSource/IPouchSource.h"
#include "Pouches/PouchSource/ConsolePouchSource.h"
#include "Pouches/PouchSource/FilePouchSource.h"
#include "Other/IFigureDataOutput.h"
#include "Other/ConsoleFigureDataOutput.h"
#include "Other/FileFigureDataOutput.h"

using namespace std;

void SavePouchToFile(CommonPouch);
IFigureDataOutput* GetRecipientDataOutput();

int main()
{

	IPouchSource* PouchSourse = GetPouchSource(); // 1) установка источника мешочка
	if (PouchSourse == nullptr) throw exception("Invalid source of a pouch!"); // 1.1) проверка указанного источника
	CommonPouch pouch = PouchSourse->GetPouch(); // 2) получение мешочка из источника
	if (pouch.FigureType == undefinedFigure) throw exception("PouchError"); // 2.1) проверка мешочка
	SavePouchToFile(pouch);
	Figure2D* figure = FigureFactory::CreateFigure(pouch); // 3) создание фигуры из мешочка
	IFigureDataOutput* RecipientData = GetRecipientDataOutput(); // 3.1) установка получателя информации о фигуре
	RecipientData->FigureDataOutput(figure); // 4) вывод информации о фигуре получателю






	for (int count = 0; count < 10; count++)
	{
		try
		{
			IPouchSource* PouchSourse = GetPouchSource(); // 1) установка источника мешочка
			if(PouchSourse == nullptr) throw exception("Invalid source of a pouch!"); // 1.1) проверка указанного источника
			CommonPouch pouch = PouchSourse->GetPouch(); // 2) получение мешочка из источника
			if(pouch.FigureType == undefinedFigure) throw exception("PouchError"); // 2.1) проверка мешочка
			Figure2D* figure = FigureFactory::CreateFigure(pouch); // 3) создание фигуры из мешочка
			IFigureDataOutput* RecipientData = GetRecipientDataOutput(); // 3.1) установка получателя информации о фигуре
			RecipientData->FigureDataOutput(figure); // 4) вывод информации о фигуре получателю
		}
		catch (exception error)
		{
			if (error.what() == "PouchError")
			{
				
				continue;
			}
			cout << error.what() << endl << endl;
		}
	}

    return 0;
}

IFigureDataOutput * GetRecipientDataOutput()
{
	int source;
	cout << "Console - 1\tFile - 2" << endl << "Select the recipient of the figure data: ";
	cin >> source;
	cout << endl;
	if (source == 1)
		return new ConsoleFigureDataOutput;
	if (source == 2)
		return new FileFigureDataOutput;
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





