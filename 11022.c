#include <stdio.h>
int main() {
	int i;
	scanf("%d", &i);
	for (int p = 0; p < i; p++) {
		int a, b;
		scanf("%d %d", &a, &b);
		printf("Case #%d: %d + %d = %d\n", p + 1, a, b, a + b);
	}
}