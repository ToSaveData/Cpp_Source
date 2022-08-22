#include "Rectangle.h"

Rectangle::Rectangle() {
	area = 0;
	side = 0;
}

Rectangle::Rectangle(double line1, double line2) : GeometricObject(line1, line2) {
	area = 0;
	side = 0;
}

double Rectangle::AreaCalculation() {
	area = line1 * line2;
	return area;
}

double Rectangle::RoundCalculation() {
	side = line1*2 + line2*2;
	return side;
}

double Rectangle::GetArea() {
	return area;
}

double Rectangle::GetRound() {
	return side;
}