#include <stdio.h>

//fungsi untuk mencuci pakaian
 void cucipakaian(){
  printf("mesin cuci sedang mencuci...\n");
  // logika untuk memcuci pakaian bisa ditambahkan di sini 
  printf("cucian selesai\n");
}
  //fungsi untuk membilas pakaian
   void bilaspakaian (){
  printf("mesin cuci sedang membilas...\n");
  // logika untuk membilas pakaian bisa ditambahkan di sini 
  printf ("bilasan selesai");
}

//fungsi untuk mengeringkan pakaian 
void keringkanpakaian (){
	printf("mesin cuci sedang mengeringkan...\n");
	//logika untuk mengeringkan pakaian bisa di tambahkan di sini 
	printf("pengeringan selesai\n");
}

int main(){
	
	//memulai proses memcuci 
	cucipakaian();
	
	//melanjutkan dengan proses pembilasan 
	bilaspakaian();
	
	return 0;
}

