#include <stdio.h>

int main() {
	int n;
	scanf_s("%d", &n);

	int message;

	message = (n >= 90) ? 'A' : (n >= 80) ? 'B' : (n >= 70) ? 'C' : (n >= 60) ? 'D' : 'F';

	printf("%c", message);
}

