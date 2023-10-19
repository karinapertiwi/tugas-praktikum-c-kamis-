#include <stdio.h>
int main()
{
	int celcius;
	float fahrenheit, reamur;
	
	printf("50\n");
	printf("\n");
	printf("50 celcius :");
	
	fahrenheit = (celcius*9/5) + 32;
	reamur = (celcius*4/5);
	
	printf("Fahrenheit = %1f F\n", fahrenheit);
	printf("Reamur = %.1f R\n", reamur);
	return 0;
}
