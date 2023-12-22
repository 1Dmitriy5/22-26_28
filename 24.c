#include <stdio.h>
#include <Windows.h>

long fuct(int n) {
	long res = 1;
	for (int i = 1; i <= n; i++) {
		res *= i;
	}
	return res;
}

void r1(int n) {
	printf(" %d", n);
	if (n > 1) {
		r1(n - 2);
	}
}


void r2(int n) {
	if (n > 1) {
		r2(n - 2);
	}
	printf(" %d", n);
}

void r3(int n) {
	printf(" %d", n);
	if (n > 1) {
		r3(n - 2);
	}
	printf(" %d", n);
}


//void main() {
//	int n;
//	printf(" =");
//	scanf_s("%d", &n);
//
//	long f = fuct(n);
//	printf("%d! = %ld", n, f);
//}

void main() {
	int n;
	printf(" =");
	scanf_s("%d", &n);

	r1(n);
	printf("\n");
	r2(n);
	printf("\n");
	r3(n);
}