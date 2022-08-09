#pragma once
#ifndef _REC_H_
#define _REC_H_ 30
#include "GeometricFigure.h"

class Rectangle : public GeometricFigure
{
public:
	Rectangle();
	void  SetWidth(const double width);
	void SetHeight(const double heigt);
	void CalArea();
	double GetWidth();
	double GetHeight();
	double GetArea();
private:
	double width;
	double height;
	double area;

};

#else
#endif // !_REC_H_
