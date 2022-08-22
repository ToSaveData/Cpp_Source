#include "GeometricObject.h"

GeometricObject::GeometricObject() {
	line1 = 0;
	line2 = 0;
}

GeometricObject::GeometricObject(double line1, double line2){
	this->line1 = line1;
	this->line2 = line2;
}

void GeometricObject::SetLine1(double line1) {
	this->line1 = line1;
}

void GeometricObject::SetLine2(double line2) {
	this->line2 = line2;
}


double GeometricObject::GetLine1() {
	return line1;
}


double GeometricObject::GetLine2() {
	return line2;
}