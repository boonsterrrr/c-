#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	int n;
	scanf("%d", &n);
	char arr[n][n];
	for (int i = 0; i < n; i++) {
		if (i / 2 == 0) {
			for (int j = 0; j < i; j++) {
				return arr[i][j] = "i + 1 / j + 1 ";
				i--;
			}
		}

		else if (i / 2 != 0) {
			for (int j = 0; j < i; j++) {
				return arr[i][j] = " j + 1 / i + 1 ";
				i--;
			}
		}
		else return 0;

	}

	printf("%d", )
}


1/1                      [0][0]                         1
1/2 2/1                  [1][0] [1][1]                  2 3
3/1 2/2 1/3              [2][0] [2][1] [2][2]           4 5 6
1/4 2/3 3/2 4/1          [3][0] [3][1] [3][2] [3][3]    7 8 9 10
5/1 4/2 3/3 2/4 1/5      