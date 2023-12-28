#include <stdio.h>

int main() {
    int NILAI[12] = {60, 80, 55, 90, 75, 40, 50, 85, 70, 65, 45, 55};
    int LULUS[12], GAGAL[12];
    int jumlahLulus = 0, jumlahGagal = 0;

    // Memindahkan nilai ke array LULUS atau GAGAL
    for (int i = 0; i < 12; i++) {
        if (NILAI[i] >= 60) {
            LULUS[jumlahLulus] = NILAI[i];
            jumlahLulus++;
        } else {
            GAGAL[jumlahGagal] = NILAI[i];
            jumlahGagal++;
        }
    }

    // Menampilkan isi array LULUS
    printf("Isi array LULUS:\n");
    for (int i = 0; i < jumlahLulus; i++) {
        printf("%d ", LULUS[i]);
    }

    // Menampilkan jumlah mahasiswa yang lulus
    printf("\nJumlah mahasiswa yang LULUS: %d\n", jumlahLulus);

    // Menampilkan isi array GAGAL
    printf("\nIsi array GAGAL:\n");
    for (int i = 0; i < jumlahGagal; i++) {
        printf("%d ", GAGAL[i]);
    }

    // Menampilkan jumlah mahasiswa yang gagal
    printf("\nJumlah mahasiswa yang GAGAL: %d\n", jumlahGagal);

    return 0;
}

