#include <stdio.h>

int main ()
{
	int alas;
	int tinggi;
	float luas,keliling;
	
	alas = 6;
	tinggi =8;
	luas = 0,5*6*8;
	
	printf("Luas segitiga adalah %f", luas);
	
	int sisi1;
	int sisi2;
	int sisi3;
	
	printf("6 :");
	scanf("%d",&sisi1);
	printf("9 :");
	scanf("%d",&sisi2);
	printf("9 :");
	scanf("%d",&sisi3);
	keliling = sisi1+sisi2+sisi3;
	
	printf("keliling segitiga adalah %d, keliling");
	return 0;
}
