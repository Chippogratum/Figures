#include "FilePouchSource.h"
#include <fstream>
#include <string>
#include <iostream>

using namespace std;

CommonPouch FilePouchSource::GetPouch() // получение мешочка из файла
{
	string fileName;// = "Pouch.txt"; // имя используемого файла
	cout << "Enter the name of the source file: "; // определение имени исходного файла с помощью консоли
	cin >> fileName; //
	CommonPouch pouch; // новосозданный мешочек
	ifstream file;

	file.open(fileName); // открытие файла по имени
	if (!file.is_open()) return CommonPouch(); // если файл не открыт - возвращается пустой мешочек
	file.read((char*)&pouch, sizeof(CommonPouch)); // чтение информации размером с мешочек из файла в новосозданный мешочек
	file.close(); // закрытие файла

	return pouch; 
}

