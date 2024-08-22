#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
	int n;
	int num;
}ans;

int main() {
	ans A[8];
	ans m;
	int i = 0;
	int sum = 0;
	for (int i = 0; i < 8; i++) {
		A[i].n = i + 1;
		scanf("%d", &A[i].num);
	}
	int max;
	for (int i = 0; i < 5; i++) {
		max = i;
		for (int j = i + 1; j < 8; j++) {
			if (A[max].num < A[j].num) {
				max = j;
			}
		}
		if (i != max) {
			m = A[i];
			A[i] = A[max];
			A[max] = m;
		}
	}
	int min;
	for (int i = 0; i <4; i++) {
		min = i;
		for (int j = i + 1; j < 5; j++) {
			if (A[min].n > A[j].n) {
				min = j;
			}
		}
		if (i != min) {
			m = A[i];
			A[i] = A[min];
			A[min] = m;
		}

		
		sum += A[i].num;

	}
	printf("%d\n", sum+A[4].num);
	for (int i = 0; i < 5; i++) {
		printf("%d ", A[i].n);
	}
	

}
