#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);


    int p = 0;
    while (a > 0) {
        p = p * 10 + (a % 10);
        a /= 10;
    }


    int q = 0;
    while (b > 0) {
        q = q * 10 + (b % 10);
        b /= 10;
    }


    if (p > q) {
        printf("%d", p);
    }
    else printf("%d", q);


}
