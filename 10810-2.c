#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() {
	int n, m;
	int* bag;

	scanf("%d %d", &n, &m);
	bag = (int*)calloc(n, sizeof(int)); //calloc은 개수, 사이즈를 둘다 입력받는거니까 n으로 개수를 알려주고 int형 쓸거니까 자료형은 int사이즈쓰면되는거고//
	int i,j,k;

	for (int a = 0; a < m; a++) {
		scanf("%d %d %d", &i, &j, &k);

		for (int b = i; i < j + 1; b++) {
			bag[i] = k;
		}
	}

	for (int c = 1; c < n + 1; c++) {
		printf("%d", bag[i]);

	}
	free(bag);

   
}

//근데 여기서 의문.arr포인터로 썼는데 왜 *arr은 안쓰지//
//그럼 그냥*~를 씀으로써 ~가 포인터역할을한다 정도로 그치는건가?//