#include <stdio.h>

// f1 : y = 2x + 2
// f2 : y = 4x - 4

int main() {
    float F[2][2] = {2, -1, 4, -1};
    float G[2] = {-2, 4};
    float Fin[2][2];
    float H[2];
    int i, j;
    float det, sum;
    // Cari determinan
    det = (F[0][0] * F[1][1]) - (F[1][0] * F[0][1]);
    // Cari Invers
    Fin[0][0] = (F[1][1])/det;
    Fin[1][1] = (F[0][0])/det;
    Fin[0][1] = ((F[0][1])/det) * -1;
    Fin[1][0] = ((F[1][0])/det) * -1;
    /*for (i = 0; i <= 1; i ++) {
        for (j = 0; j <= 1; j++) {
            if (i == j) {
                if (i == 0) {
                    Fin[i][j] = (F[i + 1][j + 1])/det;
                }
                else {
                    Fin[i][j] = (F[i - 1][j - 1])/det;
                }   
            }
            else {
                Fin[i][j] = ((F[i][j])/det) * -1;
            }
        } 
    }*/
    // Cari F^-1 * G
    for (i = 0; i <= 1; i ++) {
        sum = 0;
        for (j = 0; j <= 1; j++) {
            sum = sum + (Fin[i][j] * G[j]);
            }
        H[i] = sum;
        printf("%1.0f", H[i]);
        printf("\n");
    }
    return(0);
}