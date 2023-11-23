#include <stdio.h>

int main() {
	double kecepatan = 2.0; // Kecepatan dalam meter/detik
	
int waktu = 100; // Waktu dalam detik 
    
    double jarak = kecepatan * waktu;
    
    printf("Jarak yang ditempuh dalam 100 detik adalah: %.2f meter\n", jarak); 
    
    return 0; 
}
