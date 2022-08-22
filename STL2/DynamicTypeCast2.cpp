#include <iostream>
#include "GeometricObject.h"
using namespace std;

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

void DisplayGeometricObject(GeometricObject& object)
{
	cout << "line1 : " << object.GetLine1() << endl;
	cout << "line1 : " << object.GetLine2() << endl;


	GeometricObject* p = &object;
	Isosceles* p1 = dynamic_cast<Isosceles*>(p);
	Rectangle* p2 = dynamic_cast<Rectangle*>(p);

	if (p1 != nullptr)
	{
		p1->AreaCalculation();
		p1->RoundCalculation();
		cout << "이등변 삼각형의 넓이: " << p1->GetArea() << endl;
		cout << "이등변 삼각형의 등변: " << p1->GetRound() << endl;
	}
	if (p2 != nullptr)
	{
		p2->AreaCalculation();
		p2->RoundCalculation();
		cout << "사각형의 넓이: " << p2->GetArea() << endl;
		cout << "사각형의 등변: " << p2->GetRound() << endl;
	}
}

int main()
{
	Isosceles p1(9, 15);
	Rectangle p2(10, 12);

	DisplayGeometricObject(p1);
	cout << "*******************************************" << endl;
	DisplayGeometricObject(p2);

	return 0;
}