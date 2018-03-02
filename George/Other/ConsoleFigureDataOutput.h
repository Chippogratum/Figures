#pragma once
#include "IFigureDataOutput.h"



class ConsoleFigureDataOutput : public IFigureDataOutput
{
public:
	void FigureDataOutput(Figure2D*) override;
};
