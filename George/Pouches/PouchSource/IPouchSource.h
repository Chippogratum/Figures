#pragma once
#include "../CommonPouch.h"

class IPouchSource 
{
public:
	virtual CommonPouch GetPouch() abstract;
};
