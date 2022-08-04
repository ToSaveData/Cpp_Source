#include <stdio.h>

enum Days { SUN, MON, TUE, WED, THU, FRI, SAT };

int main()
{
	int i;

	printf("Input the date(0~6) : ");
	scanf("%d", &i);

	if (i == SUN || i == SAT)
		printf("Thanks God, It's holiday\n");
	else
		printf("Woops, It's working day\n");

	return 0;
}