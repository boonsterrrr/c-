#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int compare(const int* a, const int* b) {
	return (*a - *b);
}

int main() {
	int n;
	scanf("%d", &n);
	int* arr;
	arr = (int*)malloc(n * sizeof(int));

	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}

	qsort(arr, n, sizeof(int), compare);
	for (int i = 0; i < n; i++) {
		printf("%d\n", arr[i]);
	}
	

	free(arr);
}