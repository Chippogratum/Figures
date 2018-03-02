#pragma once
#include "IFigureDataOutput.h"



class FileFigureDataOutput : public IFigureDataOutput
{
public:
	void FigureDataOutput(Figure2D*) override;
};
