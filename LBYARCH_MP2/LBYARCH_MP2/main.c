#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include "cfunc.h"
#include <time.h>

extern void asm_version(float A, float* X, float* Y, int n, float* Z);

int main() {
	//TODO: 
	//	* initiate vectors X and Y with random values based on n
	//	* create C version of SAXPY
	//	* use time.h to record time of both versions (debug and release modes)

	//////////////////////////////////////////////////
	//FOR TESTING
	int n = 5;
	float A = 2.0;
	float X[] = { 1.5, 2.0, 3.25, 4.0, 5.001 };
	float Y[] = { 11.0, 12.5, 13.0, 14.34, 15.0 };
	float* Z = (float*)malloc(n * sizeof(float));

	clock_t start = clock();
	asm_version(A, X, Y, n, Z);
	clock_t end = clock();
	double raw = (double)(end - start);
	double elapsed = raw / CLOCKS_PER_SEC;

	printf("x86-64 Kernel:\n");
	printf("Z[0] = %f\n", Z[0]);
	printf("Z[1] = %f\n", Z[1]);
	printf("Z[2] = %f\n", Z[2]);
	printf("Z[3] = %f\n", Z[3]);
	printf("Z[4] = %f\n", Z[4]);
	printf("Time measured: %.3f seconds.\n\n", elapsed);

	start = clock();
	c_version(A, X, Y, n, Z);
	end = clock();
	raw = (double)(end - start);
	elapsed = raw / CLOCKS_PER_SEC;

	printf("C Kernel:\n");
	printf("Z[0] = %f\n", Z[0]);
	printf("Z[1] = %f\n", Z[1]);
	printf("Z[2] = %f\n", Z[2]);
	printf("Z[3] = %f\n", Z[3]);
	printf("Z[4] = %f\n", Z[4]);
	printf("Time measured: %.3f seconds.\n", elapsed);
	//////////////////////////////////////////////////

	return 0;
}
