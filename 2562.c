#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() {
	int a = 0, num[9], index;
	for (int i = 0; i < 9; i++) {
		scanf("%d", &num[i]);
		if (a < num[i]) {
			a = num[i];
			index = i;
		}
	}
	printf("%d\n%d", a, index + 1);
}
