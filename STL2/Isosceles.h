#include "GeometricObject.h"

class Isosceles : public GeometricObject {
private:
	double area;
	double side;
public:
	Isosceles();
	Isosceles(double line1, double line2);
	
	double AreaCalculation();
	double RoundCalculation();

	double GetArea();
	double GetRound();
};
