#include "GeometricObject.h"

class Rectangle : public GeometricObject {
private:
	double area;
	double side;
public:
	Rectangle();
	Rectangle(double line1, double line2);
	double AreaCalculation();
	double RoundCalculation();
	double GetArea();
	double GetRound();
};