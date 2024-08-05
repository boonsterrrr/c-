#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int  main() {
	char arr[1000000];
	scanf("%[^\n]s", arr);
	int len;
	len = strlen(arr);
	int count = 0;

	if (len == 1 & arr[0] == ' ') {
		printf("0");
	}
	
	for (int i = 1; i < len-1 ; i++) {
		if (arr[i] == ' ') {
			count++;
		}
	}
	printf("%d", count + 1);
}
