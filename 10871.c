#include <stdio.h>


int main() {
	int i, p, j;
	scanf("%d %d", &i, &p);
	for (int a = 0; a < i; a++) {
		scanf("%d", &j);
		if (j < p) {
			printf("%d ", j);
		}
	}
}