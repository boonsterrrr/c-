#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#include <stdio.h>

int main() {
	int H, M;
	scanf("%d %d", &H, &M);

	if (M >= 45) {
		M = M - 45;
		printf("%d %d", H, M);
	}
	else {
		M = 15 + M;
		if (H == 0) {
			H = 23;
		}
		else H = H - 1;
		printf("%d %d", H, M);
	}
}


--------------
//이건 작동은 제대로 하는것 같은데 왜 틀린거지//

int main() {
	int H, M;
	scanf("%d %d", &H, &M);

	if (H == 0 & 0 <= M < 45) {
		printf("%d %d", 23, 15 + M);
	}
	else if (H == 0 & M >= 45) {
		printf("%d %d", 23, M - 45);
	}
	else if (H > 0 & 0 <= M < 45) {
		printf("%d %d", H - 1, 15 + M);
	}
	else if (H > 0 & M >= 45) {
		printf("%d %d", H - 1, M - 45);
	}
}
