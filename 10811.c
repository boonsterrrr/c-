#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() {
	int i,j;
	scanf("%d %d", &i, &j);
	int a, b;
	int num[100] = {0,};

	for (int r = 1; r < i+1 ; r++) {
		num[r] = r;
	}

	for (int p = 0; p < j; p++) {
		scanf("%d %d", &a, &b);
		for (int t = 0; t < (b - a + 1)/2 ; t++) {
			int c = num[a + t];
			num[a + t] = num[b - t];
			num[b - t] = c;
			
		}
	}
	for (int y = 1; y < i + 1; y++) {
		printf("%d ", num[y]);
	}
	
}

