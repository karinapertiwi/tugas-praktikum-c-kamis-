#include <stdio.h>

int main(){
	int nilai_mahasiswa[10];
	int i;
	
	printf("Masukan nilai mahasiswa:\n");
	
	
// Memasukan nilai mahasiswa ke dalam array 
   for (i =0; i < 10; i++) {
   	printf("Nilai mahasiswa ke-%d: ", i + 1); 
   	
   	
scanf("%d", &nilai_mahasiswa[i]);
   }
   
   // Mencetak nilai mahasiswa yang lulus 
   printf("\nDaftar nilai mahasiswa yang lulus:\n");
   for (i = 0; i < 10; i++) {
   	if (nilai_mahasiswa[i] >= 60) {
   		printf("Nilai mahasiswa ke-%d: %d\n", i + 1, nilai_mahasiswa[i]);
   		
	   }
   }
   
   return 0;
}
