#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() {

	int n;
	int sum = 0;
	char num[100] = { 0 };

	scanf("%d", &n);
	scanf("%s", num);

	for (int i = 0; i < n; i++) {
		sum += num[i]-'0';
	}
	printf("%d", sum);
}