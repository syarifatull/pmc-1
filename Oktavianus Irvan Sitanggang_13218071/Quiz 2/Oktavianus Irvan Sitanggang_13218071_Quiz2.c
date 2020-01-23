#include "stdio.h"
#include "math.h"
#include "string.h"

int i ,j ,k;
double ans[2];

int main(){
	double matY [2][2] = {-2 , 1, -4 , 1};
	double matYInv [2][2];
	double answ[2] = {2 , -4};
	double det = 0;	

	det = -(matY[0][1]*matY[1][0]) + (matY[1][1]*matY[0][0]);

	for (i = 0; i < 2; ++i){
		for(j = 0; j < 2; ++j){
			if (i!=j){
				matYInv[i][j] = matY[i][j]*-1;
			}
			else{
				matYInv[i][j] = matY[!i][!j];
			}
			matYInv[i][j] /= det;
			ans[i] += (answ[j]*matYInv[i][j]);
		}
	}

	printf(" x = %f  y = %f", ans[0], ans[1]);

	return 0;
}