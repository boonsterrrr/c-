#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() {
	int num[10];
	int t = 0;
	
	for (int i = 0; i < 10; i++) {
		scanf("%d", &num[i]);
		num[i] = num[i] % 42;
	}
	for (int i = 0; i < 10; i++) {
		int a = 0;
		for (int d = 0; d < i; d++) {
			if (num[i] == num[d]) {
				a++;
			}
			

		}
		if (a == 0) {
			t++;
		}
		
	}
	printf("%d", t);
}