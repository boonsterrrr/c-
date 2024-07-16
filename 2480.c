#include <stdio.h>

#include <stdio.h>

int main() {
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	
	if (a == b & b == c) {
		printf("%d", 10000 + a * 1000);
	}
	else if (a == b | a == c) {
		printf("%d", 1000 + a * 100);
	}
	else if (b == c) {
		printf("%d", 1000 + b * 100);
	}

	if (a != b & b != c & c != a) {
		if (a > b & a > c) {
			printf("%d", a * 100);
		}
		else if (b > a & b > c) {
			printf("%d", b * 100);
		}
		else if (c > a & c > b) {
			printf("%d", c * 100);
		}
	}

}

//풀긴함//

// void Max(int i, int j, int p) {
// 	int a, b, c;
// 	int d;
// 	if (a > b & a>c) {
// 		d = a;
// 		printf("%d", d);
// 	}
// 	else if (b > a & b > c) {
// 		d = b;
// 		printf("%d", d);
// 	}
// 	else if (c > a & c > b) {
// 		d = c;
// 		printf("%d", d);
// 	}
// }

// int main() {
// 	int a, b, c;
// 	scanf("%d %d %d", &a, &b, &c);
	
// 	if (a != b& b != c& c != a) {
// 		Max(&a, &b, &c);
// 		printf("%d", Max * 100);
// 	}

// 	if (a == b == c) {
// 		printf("%d", 10000 + a * 1000);
// 	}
// 	else if (a == b | a == c) {
// 		printf("%d", 1000 + a * 100);
// 	}
// 	else if (b == c) {
// 		printf("%d", 1000 + b * 100);
// 	}
// }

//Max함수를 어떻게 int 화 시키지//
