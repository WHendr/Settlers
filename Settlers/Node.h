#pragma once
#include "HousePlot.h"
#include "Port.h"
#include "RoadPlot.h"

class Node
{
public:
	int number;
	int resource;

	HousePlot hp[6];
	RoadPlot sides[6];
	Port port;
};