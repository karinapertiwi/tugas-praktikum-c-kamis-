#include <iostream>
using namespace std;

int main() {
    int A[5] = {5, 12, 8, 17, 5};
    int B[7] = {5, 11, 7, 25, 9, 12, 14};
    int C[12];
    int indexC = 0;

    for(int i = 0; i < 5; i++) {
        if(A[i] > 10) {
            C[indexC++] = A[i];
        }
    }

    for(int i = 0; i < 7; i++) {
        if(B[i] > 10) {
            C[indexC++] = B[i];
        }
    }

    // Mencetak isi array C
    for(int i = 0; i < indexC; i++) {
        cout << C[i] << " ";
    }

    return 0;
}
