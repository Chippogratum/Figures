#include "FilePouchSource.h"
#include <fstream>
#include <string>
#include <iostream>

using namespace std;

CommonPouch FilePouchSource::GetPouch() // получение мешочка из файла
{
	//cout << "Enter the name of the outgoing file: "; // определение имени исходящего файла с консоли
	//cin >> fileNameIn; //
	CommonPouch pouch; // новосозданный мешочек
	ifstream file;
	string fileName = "Pouch.txt"; // имя используемого файла

	file.open(fileName); // открытие файла по имени
	file.read((char*)&pouch, sizeof(CommonPouch)); // чтение информации размером с мешочек из файла в новосозданный мешочек
	file.close(); // закрытие файла

	return pouch; 
}

