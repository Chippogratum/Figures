#include "ConsoleFigureDataOutput.h"
#include <string>
#include <iostream>
#include "../Figures/Rectangle.h"
#include "../Figures/Square.h"
#include "../Figures/Circle.h"

using namespace std;

void ConsoleFigureDataOutput::FigureDataOutput(Figure2D* figure)
{
	cout << figure->ToString() << endl;

	//switch (figure->FigureType) // старый вариант преобразования указателя на базовый класс к указателю на произвольный, орудуя полем FigureType
	//{
	//case rectangle:
	//	dynamic_cast<Rectangle*>(figure);
	//	figure->ToString();
	//case square:
	//	dynamic_cast<Square*>(figure);
	//	figure->ToString();
	//case circle:
	//	dynamic_cast<Circle*>(figure);
	//	figure->ToString();
	//}
}