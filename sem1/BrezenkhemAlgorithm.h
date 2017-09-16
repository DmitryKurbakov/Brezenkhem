
//	This class is a Algorithm Layer.
//	It Contains the methods which includes the realisations of Brezenkhem's algorithms for
//	line, circle and ellipse

#pragma once

#include <cmath>
#include <utility>

using namespace System;
using namespace std;

ref class BrezenkhemAlgorithm
{
protected:
	System::Collections::Generic::List<Tuple<int, int>^>^ points;

public:
	BrezenkhemAlgorithm();
	~BrezenkhemAlgorithm();

	//Reflections of point for circle and ellipse
	void PushPoint(int x, int y);
	void PutPointsToEllipseSet(int x, int y, int x0, int y0);

	void BrezenkhemLine(int x0, int y0, int x1, int y1);
	void BrezenkhemCircle(int x0, int y0, int radius);
	void BrezenkhemEllipse(int x0, int y0, int x_radius, int y_radius);
};

