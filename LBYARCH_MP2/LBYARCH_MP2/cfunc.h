extern void c_version(float A, float* X, float* Y, int n, float* Z) {
	int c = 0;

	while (c < n) {
		Z[c] = A * X[c] + Y[c];
		c++;
	}
}