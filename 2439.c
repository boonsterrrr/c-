#include <stdio.h>
int main() {
	int i, p, j;
	scanf("%d", &i);

	for (p = 0; p < i;p++) {
		for (j =  1; j <= i-1-p; j++) {
			printf(" ");
		}
		for (j = 0; j <p+1; j++) {
			printf("*");
		}
		printf("\n");
	}


}

