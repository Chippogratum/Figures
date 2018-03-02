#pragma once
#include "../Figures/Figure2D.h"


class IFigureDataOutput
{
public:
	virtual void FigureDataOutput(Figure2D*) abstract;
};