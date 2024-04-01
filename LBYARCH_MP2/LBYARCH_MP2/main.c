#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include "cfunc.h"
#include <time.h>
#include <math.h>

#define MAX_DECIMAL_PLACE 10

extern void asm_version(float A, float* X, float* Y, int n, float* Z);

int main() {
	int n = pow(2, 20);
	float A = 2.5;
	float* X = (float*)malloc(n * sizeof(float));
	float* Y = (float*)malloc(n * sizeof(float));

	float asmTimeSum[3] = {0.0, 0.0, 0.0};
	float cTimeSum[3] = { 0.0, 0.0, 0.0 };

	float asmTime[30];
	float cTime[30];

	for (int j = 0; j < 3; j++) {
		
		srand(time(NULL));

		for (int i = 0; i < n; i++) {
			float random_float = (float)(rand() % (MAX_DECIMAL_PLACE * 10)) / 10.0f;
			X[i] = random_float;
		}

		for (int i = 0; i < n; i++) {
			float random_float = (float)(rand() % (MAX_DECIMAL_PLACE * 10)) / 10.0f;
			Y[i] = random_float;
		}

		printf("Value of n: %d\n", n);
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

		for (int k = 0; k < 30; k++) {

			clock_t start = clock();
			asm_version(A, X, Y, n, Z);
			clock_t end = clock();
			double raw = (double)(end - start);
			double asmElapsed = raw / CLOCKS_PER_SEC;

			if (k == 0) {
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
				printf("Z[9] = %f\n\n", Z[9]);
			}

			asmTimeSum[j] += asmElapsed;

			start = clock();
			c_version(A, X, Y, n, Z);
			end = clock();
			raw = (double)(end - start);
			double cElapsed = raw / CLOCKS_PER_SEC;

			if (k == 0) {
				
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
				printf("Z[9] = %f\n\n", Z[9]);
			}
			cTimeSum[j] += cElapsed;

			asmTime[k] = asmElapsed;
			cTime[k] = cElapsed;
	
			//printf("Time of x86-64 Kernel measured for loop %d: %.3f seconds.\n", k + 1, asmElapsed);
			//printf("Time of C Kernel measured for loop %d: %.3f seconds.\n", k + 1, cElapsed);
		}

		printf("#### x86-64 Kernel\n");
		printf("| Loop# | Measured Time (seconds) |\n");
		printf("|-------|--------------------------|\n");
		for (int k = 0; k < 30; k++) {
			printf("| %d\t| %.3f                    |\n", k + 1, asmTime[k]);
		}

		printf("\n");

		printf("#### C Kernel\n");
		printf("| Loop# | Measured Time (seconds) |\n");
		printf("|-------|--------------------------|\n");
		for (int k = 0; k < 30; k++) {
			printf("| %d\t| %.3f                    |\n", k + 1, cTime[k]);
		}

		printf("\nAverage Time for x86-64 Kernel: %.3f\n", (asmTimeSum[j] / 30));
		printf("Average Time for C Kernel: %.3f\n\n", (cTimeSum[j] / 30));

		if (j == 0) n = pow(2, 24);
		if (j == 1) n = pow(2, 28);

		X = (float*)malloc(n * sizeof(float));
		Y = (float*)malloc(n * sizeof(float));
	}

	float asmTimeTotal = 0;
	float cTimeTotal = 0;
	float asmTotalTimeAve = 0;
	float cTotalTimeAve = 0;

	for (int i = 0; i < 3; i++) {
		asmTimeTotal += asmTimeSum[i];
		cTimeTotal += cTimeSum[i];
	}

	asmTotalTimeAve = asmTimeTotal / 90;
	cTotalTimeAve = cTimeTotal / 90;

	printf("\nTotal Average Time for x86-64 Kernel: %.3f\n", asmTotalTimeAve);
	printf("Total Average Time for C Kernel: %.3f\n\n", cTotalTimeAve);

	return 0;
}
