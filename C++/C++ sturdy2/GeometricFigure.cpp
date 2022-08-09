#include "GeometricFigure.h"
#include "Rectangle.h"

GeometricFigure::GeometricFigure()
{
	color = "white";
}

GeometricFigure::GeometricFigure(const string color)
{
	this->color = color;
}

void GeometricFigure::SetColor(const string color)
{
	this->color = color;
}

bool GeometricFigure::IsPaint()
{
	return (color == "white") ? false : true;
}

string GeometricFigure::GetColor()
{
	return color;
}

Rectangle::Rectangle(){}

void Rectangle::SetWidth(const double width) {}
void Rectangle::SetHeight(const double height) {}
void Rectangle::CalArea() {}
double Rectangle::GetWidth() {}
double Rectangle::GetHeight() {}
double Rectangle::GetArea() {}

int main()
{
	GeometricFigure obj1;

	cout << "obj1�� ��: " << obj1.GetColor() << endl;
	obj1.SetColor("green");
	cout << "obj1�� ��: " << obj1.GetColor() << endl;
	
	Rectangle rect1;
	rect1.SetWidth(3.2);
	rect1.SetHeight(4.3);
	rect1.CalArea();
	rect1.SetColor("blue");
	cout << "* ���簢�� ����*" << endl;
	cout << "* ����: *" << rect1.GetWidth()<< endl;
	cout << "* ����: *" << rect1.GetHeight() << endl;
	cout << "* ����: *" << rect1.GetArea() << endl;

	if (rect1.IsPaint())
		cout << "*�� ����: " << rect1.GetColor() << endl;
	return 0;
}
