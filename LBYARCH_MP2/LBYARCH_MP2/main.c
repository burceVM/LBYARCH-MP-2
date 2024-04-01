#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include "cfunc.h"
#include <time.h>
#include <math.h>

#define MAX_DECIMAL_PLACE 10

extern void asm_version(float A, float* X, float* Y, int n, float* Z) {};

int main() {
	//TODO: 
	//	* initiate vectors X and Y with random values based on n
	//	* create C version of SAXPY
	//	* use time.h to record time of both versions (debug and release modes)

	//////////////////////////////////////////////////
	//FOR TESTING
	int n = 10;
	float A = 2.5;
	float* X = (float*)malloc(n * sizeof(float));
	float* Y = (float*)malloc(n * sizeof(float));

	srand(time(NULL));

	for (int i = 0; i < n; i++) {
		float random_float = (float)(rand() % (MAX_DECIMAL_PLACE * 10)) / 10.0f;
		X[i] = random_float;
	}

	for (int i = 0; i < n; i++) {
		float random_float = (float)(rand() % (MAX_DECIMAL_PLACE * 10)) / 10.0f;
		Y[i] = random_float;
	}

	printf("Generated values for X:\n");
	for (int i = 0; i < 10; i++) {
		printf("%.1f ", X[i]);
	}
	printf("\n");

	printf("Generated values for Y:\n");
	for (int i = 0; i < 10; i++) {
		printf("%.1f ", Y[i]);
	}
	printf("\n\n");

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
	printf("Z[5] = %f\n", Z[5]);
	printf("Z[6] = %f\n", Z[6]);
	printf("Z[7] = %f\n", Z[7]);
	printf("Z[8] = %f\n", Z[8]);
	printf("Z[9] = %f\n", Z[9]);
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
	printf("Z[5] = %f\n", Z[5]);
	printf("Z[6] = %f\n", Z[6]);
	printf("Z[7] = %f\n", Z[7]);
	printf("Z[8] = %f\n", Z[8]);
	printf("Z[9] = %f\n", Z[9]);
	printf("Time measured: %.3f seconds.\n", elapsed);
	//////////////////////////////////////////////////

	return 0;
}
