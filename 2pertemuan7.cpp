#include <iostream>
using namespace std;

int main() {
    int A[11]; // Deklarasi array A dengan panjang 11
    int data[] = {12, 15, 7, 10, 5, 2, 17, 25, 9, 20, 35}; // Data yang akan diinput

    int count = 0; // Variabel untuk menghitung jumlah nilai genap yang sudah disimpan

    // Loop untuk menginput data ke dalam array A sesuai dengan kondisi (hanya nilai genap)
    for (int i = 0; i < 11; i++) {
        if (data[i] % 2 == 0) {
            A[count] = data[i];
            count++;
        }
    }

    // Loop untuk mencetak nilai yang sudah disimpan dalam array A
    for (int i = 0; i < count; i++) {
        cout << A[i] << " ";
    }
    return 0;
}
