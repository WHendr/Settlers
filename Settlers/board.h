#pragma once
#include "Node.h"
class Board
{
public:
	Node *nodes = new Node[19];
	HousePlot *houses = new HousePlot[54];
	RoadPlot *roads = new RoadPlot[72];

	Board *InitializeBoard();
};

