#pragma once

#include "Board.h"
#include "Cell.h"

class Areas
{
private:
	Cell cells[9];

public:
	virtual bool CheckAllCellsForCorrect() = 0; //Makes sure there are no duplicates
	virtual bool CheckAllCellsForZero() = 0;
};

