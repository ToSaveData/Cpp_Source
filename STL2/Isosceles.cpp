#include "Isosceles.h"

Isosceles::Isosceles() {
	area = 0;
	side = 0;
}

Isosceles::Isosceles(double line1, double line2) : GeometricObject(line1, line2) {
	area = 0;
	side = 0;
}

double Isosceles::AreaCalculation() {
	area = line1 * line2 / 2;
	return area;
}

double Isosceles::RoundCalculation() {
	side = sqrt((line1/2)*(line1/2)+line2*line2)*2 + line1;
	return side;
}

double Isosceles::GetArea() {
	return area;
}

double Isosceles::GetRound() {
	return side;
}