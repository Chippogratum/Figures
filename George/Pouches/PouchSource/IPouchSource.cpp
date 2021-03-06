#include <iostream>
#include "IPouchSource.h"
#include "FilePouchSource.h"
#include "ConsolePouchSource.h"

using namespace std;

IPouchSource* GetPouchSource()
{
	int source;
	std::cout << "Console - 1\tFile - 2" << endl << "Select the source of the pouch: ";
	cin >> source;
	cout << endl;
	if (source == 1)
		return new ConsolePouchSource;
	if (source == 2)
		return new FilePouchSource;
	return nullptr;
}
