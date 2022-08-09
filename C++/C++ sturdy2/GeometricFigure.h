#pragma once
#ifndef _GEO_H_
#include <iostream>
#include <string>

using namespace std;

class GeometricFigure
{
public:
	GeometricFigure();
	GeometricFigure(const string color);
	void SetColor(const string color);
	bool IsPaint();
	string GetColor();
protected:
	string color;
};



#else
#endif // !_GEO_H_


