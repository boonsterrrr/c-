#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() {
	int bag[101] = {0,};
	int n, m, i, j, k;
	scanf("%d %d", &n, &m);
	
	for (int p = 0; p < m; p++) {
		scanf("%d %d %d", &i, &j, &k);
		for (int a = i; a <j+1; a++) {
			bag[a] = k;
		}
	}

	for (int b = 1; b <n+1; b++) {
		printf("%d ", bag[b]);
	}
	return 0;
}

//출력이 공백을 두고 배열 나오게 하는거였어//