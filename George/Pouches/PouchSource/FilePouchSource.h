#pragma once
#include "IPouchSource.h"
#include "../CommonPouch.h"

class FilePouchSource : public IPouchSource
{
public:
	CommonPouch GetPouch() override;
};
