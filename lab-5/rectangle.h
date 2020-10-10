#pragma once

#include "polygon.h"
//rectangle is a derived class which is being derived from the base class polygon
class rectangle : public polygon
{
	public:
	bool isRectangle();
};