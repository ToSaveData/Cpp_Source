#include "Isosceles.h"
#include "Rectangle.h"

int main()
{
	Rectangle a(10, 20);

	cout << "밑변 : " << a.GetLine1() << endl;
	cout << "높이 : " << a.GetLine2() << endl;
	cout << "면적 : " << a.AreaCalculation() << endl;
	cout << "둘레 : " << a.RoundCalculation() << endl;

	return 0;
}
