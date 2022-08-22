#ifndef _GEOMETRIC_OBJECT_H_
#define _GEOMETRIC_OBJECT_H_

#include <iostream>
#include <cmath>
using namespace std;

class GeometricObject {
protected:
	double line1;
	double line2;

public:
	GeometricObject();
	GeometricObject(double line1, double line2);

	void SetLine1(double line1);
	void SetLine2(double line2);
	double GetLine1();
	double GetLine2();
	virtual double AreaCalculation() = 0;
	virtual double RoundCalculation() = 0;
};

#else
#endif