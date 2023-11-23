#include <stdio.h>

int main(){
	int deret[11];
	int i, nilai = 1;
	
	for (i = 0; i < 11; i++) {
		deret[i] = nilai;
		nilai *= 2;
		
	}
	
	for (i = 0; i < 11; i++) {
		printf("%d ", deret[i]);
	}
	
	return 0;
}
