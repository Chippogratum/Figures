#include "FileFigureDataOutput.h"
#include "../Figures/Figure2D.h"
#include <string>
#include <fstream>
#include <iostream>

using namespace std;

void FileFigureDataOutput::FigureDataOutput(Figure2D* figure)
{
	string fileName;
	cout << "Enter the filename for the data record of the pouch: "; // определение имени файла-получателя
	cin >> fileName;
	cout << endl;

	string data = figure->ToString(); // создание строки с информацией
	
	ofstream file(fileName, ofstream::out);
	file << data;
	//file.open(fileName, std::ofstream::app); // содержимое файла будет дополнено
	//file.write((char*)&data, sizeof(data)); // запись информации в файл
	file.close(); // закрытие файла
}
// ЗАПИСАТЬ СТРОКУ В МАССИВ СИМВОЛОВ И ЗАПИСАТЬ КАЖДЫЙ БАЙТ В ФАЙЛ ?!