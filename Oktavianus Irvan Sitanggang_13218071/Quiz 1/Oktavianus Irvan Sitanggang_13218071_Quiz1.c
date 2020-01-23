/*
* Nama : Oktavianus Irvan Sitanggang
* NIM  : 13218071
* 
*/
#include "stdio.h"
#include "math.h"
#include "string.h"

#define PI 3.14159265359
#define time 0.01

int main(){
	int i,j,k;
	double x = 0,
		   y = 0;
	double v = 50;
	double theta = PI/3;
	double t = 0;
	double xans;
	// Tugas
	// 1. Track Posisi tiap 10 ms
	// 2. Hitung jarak terjauhnya
	do{ // memakai do agar iterasi berjalan minimal 1 kali
		// Output, pasti akan berjalan ketika y >= 0
		printf("x saat %f s adalah %f\n",t , x );
		printf("y saat %f s adalah %f\n",t , y );
		xans = x;		

		// iteration time
		t += time;
		y = v*sin(theta)*t - 5*t*t;
		x = v*cos(theta)*t;
		
	}while(y >= 0);

	printf("xmaks = %f", xans);
}