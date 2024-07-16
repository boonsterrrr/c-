#include <stdio.h>

int main() {
	int a, b, c;
	scanf("%d %d\n%d", &a, &b, &c);
	a = a + ((b + c) / 60);
	b = (b + c) % 60;
	if (a >= 24) {
		a = a - 24;
	}

	printf("%d %d", a, b);
}
