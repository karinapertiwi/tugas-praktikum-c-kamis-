#include <stdio.h>

int main() {
	double saldo [11]; // Array untuk menyimpan saldo setiap bulan,indeks 0 untuk bulan awal
	
	saldo[0] = 1000000.0; // Saldo awal 
	
	double bunga = 0.02; //Bunga 2% per bulan 
	int bulan; 
	
	for (bulan = 1; bulan <= 10; bulan++) {
		saldo[bulan] = saldo[bulan - 1] + (saldo[bulan - 1] * bunga); 
	}
	
	printf("Jumlah uang setelah 10 bulan adalah: Rp. %.2f\n", saldo[10]);
	
	return 0;
}
