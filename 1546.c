#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() {
	int n, num;
	scanf("%d", &n);
	int max = 0;
	int m = 0;

	for (int i = 0; i < n; i++) {
		scanf("%d", &num);
		m += num;
		if (max < num) {
			max = num;
		}
	}
	
	printf("%f\n", 100.0 * m / n / max);
	
}
