#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int n, m;
	int i, j;
	int k;
	int arr[101] = { 0 };
	scanf("%d %d", & n, & m);
	for (k = 1; k < n; k++) {
		arr[k] = k;
	}
	for (k = 0; k < m; k++) {
		scanf("%d %d", &i, &j);
		int temp = 0;
		temp = arr[i];
		arr[i] = arr[j];
		arr[j] = temp;
	}
	for (k = 1; k <= n; k++) {
		printf("%d", arr[k]);
	}
}

---------------------엥 2주전에 풀었다고..?뭐지-----
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() {
	int* bag = (int*)calloc(101, sizeof(int));
	for (int i = 0; i < 101; i++) {
		bag[i] = i;
	}

	int n,m;
	scanf("%d %d", &n, &m);
	
	for (int a = 0; a < m-1; a++) {
		int i, j;
		scanf("%d %d ", &i, &j);

		int p = bag[i];
		bag[i] = bag[j];
		bag[j] = p;
		
	}

	for (int c = 1; c < n + 1; c++) {
		printf("%d ", bag[c]);

	}
	free(bag);

   
}
//타임 이거 왜 백준에서는 돌아가는거임 저거 f5눌러서 입력하고 엔터치면 바로 답안나오고 다른 그냥 아무거나 하나더 입력하고 엔터쳐야지 답나오던데..?//

//백준에서는 14번째줄이 m이어야지 돌아가고, 보라색은 m-1이어야지 돌아가고..흠ㅁㅁ...//
