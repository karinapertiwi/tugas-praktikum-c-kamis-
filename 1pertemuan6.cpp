#include <stdio.h>

int main(){
	
	int deret [10];
	int i;
	
	for(i = 0; i < 10; i++){
		deret[i] = (i + 1) * 10;
	}
	
	for(i = 0; i < 10; i++) {
		
		
printf("%d ", deret[i]);
	}
	
	return 0;
}
