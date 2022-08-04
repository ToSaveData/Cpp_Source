#define _USE_MATH_DEFINES

#include <stdio.h>

#include <math.h>

int main()
{
	int i = 3.65;
	long l = M_PI;
	float f = M_PI;
	double d = M_PI;
	
	printf("%d %ld\n", i, l);
	printf("%.20f %.20f\n", f, d);

	return 0;
}