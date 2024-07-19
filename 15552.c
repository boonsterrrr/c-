#include <stdio.h>
int main() {
	int i;
	scanf("%d", &i);
	for (int p = 0; p < i; p++) {
		int a, b;
		scanf("%d %d", &a, &b);
		printf("%d\n", a + b);
	}
}