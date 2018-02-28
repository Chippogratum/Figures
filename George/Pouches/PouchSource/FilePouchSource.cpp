#include "FilePouchSource.h"
#include <fstream>
#include <string>
#include <iostream>

using namespace std;

static string fileName = "Pouch.txt"; // имя используемого файла

CommonPouch FilePouchSource::GetPouch() // получение мешочка из файла
{
	//cout << "Enter the name of the outgoing file: "; // определение имени исходящего файла с консоли
	//cin >> fileNameIn; //
	CommonPouch pouch; // новосозданный мешочек
	ifstream file;

	file.open(fileName); // открытие файла по имени
	file.read((char*)&pouch, sizeof(CommonPouch)); // чтение информации размером с мешочек из файла в новосозданный мешочек
	file.close(); // закрытие файла

	return pouch; 
}

void FilePouchSource::SavePouchToFile(CommonPouch pouch) // отправка мешочка в файл
{
	//cout << "Enter the name of the source file: "; // определение имени файла-источника с консоли
	//cin >> fileNameOut; //
	ofstream file;

	file.open(fileName, std::ofstream::out); // содержимое файла будет перезаписано
	file.write((char*)&pouch, sizeof(CommonPouch)); // запись информации размером с мешочек из полученного мешочка в файл
	file.close(); // закрытие файла
}
