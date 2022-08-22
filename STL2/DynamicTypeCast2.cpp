#include <iostream>
#include "GeometricObject.h"
using namespace std;

void DisplayGeometricObject(DisplayGeometricObject& object)
{
	cout << "line1 : " << object.GetLine1() << endl;
	cout << "line1 : " << object.GetLine2() << endl;


	GeometricObject* p = &object;
	Isosceles* p1 = dynamic_cast<Isosceles*>(p);
	Rectangle* p2 = dynamic_cast<Rectangle*>(p);

	if (p1 != nullptr)
	{
		p1->AreaCalculation();
		p2->Compute();
		cout << "이등변 삼각형의 넓이: " << p1->GetArea() << endl;
		cout << "이등변 삼각형의 등변: " << p1->GetSide() << endl;
	}
}

int main()
{
	Isosceles p1(9, 15);
	Isosceles p2(10, 12);

	DisplayGeometricObject(p1);
	cout << "**************************************************" << endl;
	DisplayGeometricObject(p2);

	return 0;
}