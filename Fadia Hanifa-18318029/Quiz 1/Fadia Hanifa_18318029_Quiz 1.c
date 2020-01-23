// Fadia Hanifa Suwandoko 18318029
#include <stdio.h>
#include <math.h>

int main() {
    int vo = 50;                                // inisiasi vo
    float vox = vo * 0.5;                       // menghitung vo pada sumbu x
    float voy = vo * 0.866;                     // menghitung vo pada sumbu y
    double t = 0;                               // inisiasi t
    double y = (voy * t) - (5 * t * t);         // menghitung posisi y
    while (y >= 0) {                            // looping dengan kondisi y positif
        double x = vox * t;                     // menghitung x
        printf("Saat t = %1.2lf", t);           // print hasil perhitungan
        printf(" s, posisi x = %3.2lf", x);
        printf(", posisi y = %2.2lf", y);
        printf("\n");
        t = t + 0.01;                           // t ditambah dengan 0.01ms
        y = (voy * t) - (5 * t * t);            // hitung y
    }
    return(0);
}