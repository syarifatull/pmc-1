/*
Fungsi 1 y =2x +2
fungsi 2 y = 4x -4
*/
#include <stdio.h>
#include <math.h>
/*
[-2 1] x  = 2
[-4 1] y  = -4
*/
int main(void)
{
    // Initialize
    int a[2][2] = {-2, 1, -4, 1};
    int c [2][1] = {2, - 4};
    double res[2][1];
    int i,j;
    double invers[2][2];
    double det;
    int temp[2][2];

    //Adjoin
    for (i = 0;i <= 1; i++)
    {
        for(j = 0; j<= 1; j++)
        {
            if(i == j)
            {
                if(i == 0)
                {
                    temp[i][j] = a[i+1][j+1];
                }
                else
                {
                    temp[i][j] = a[i-1][j-1];
                }
            }
            else
            {
                temp[i][j] = -a[i][j];
            }
        }
    }

    // determinan
    det = a[0][0]*a[1][1] - a[1][0]*a[0][1];

    //Invers
    for (i = 0;i <= 1; i++)
    {
        for(j = 0; j<= 1; j++)
        {
            invers[i][j] = temp[i][j] / det;
        }
    }
    //Result
    for (i = 0;i <= 1; i++)
    { 
            res[i][0] = (invers[i][0] * c[0][0]) + (invers[i][1] * c[1][0] );
    }

    // Output
    printf("Titik Potong = (%.0f , %.0f)", res[0][0], res[1][0]);
}