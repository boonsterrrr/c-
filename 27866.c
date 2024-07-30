#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() {
	char s[1000];
	scanf("%s", s);
	int i;
	scanf("%d", &i);
	printf("%c", s[i-1]);
}
