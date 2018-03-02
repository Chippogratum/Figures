#include "ConsoleFigureDataOutput.h"
#include <string>
#include <iostream>

using namespace std;

void ConsoleFigureDataOutput::FigureDataOutput(Figure2D* figure)
{
	cout << figure->ToString() << endl;
}