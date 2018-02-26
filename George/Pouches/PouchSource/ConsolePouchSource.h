#pragma once
#include "IPouchSource.h"
#include "../CommonPouch.h"

class ConsolePouchSource : public IPouchSource
{
public:
	CommonPouch GetPouch() override;
};
