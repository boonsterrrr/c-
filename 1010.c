#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	int t, m, n;
	scanf("%d", &t);
	int p;
	for (int i = 0; i < t; i++) {
		scanf("%d %d", &n, &m); 
		p = 1;
		for (int a = 0; a < n; a++) {
			p *= m - a;
			p /= (1 + a); 
		}
		printf("%d\n", p);
	}
}

