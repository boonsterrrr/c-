#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main() {
	int x;
	scanf("%d", &x);
	int p = 1;
	while (1) {
		if ((p * (p + 1)) / 2 >= x) {
			break;	
		}
		p++;	
	}
	int r = (p * (p - 1)) / 2;
	int a = x - r;
	int b = p + 1 - a;

	if (p % 2 == 0) {
		printf("%d/%d", a, b);
	}
	else printf("%d/%d", b, a);
	
}
