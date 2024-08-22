#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main() {
    int n, mon;
    scanf("%d", &n);
    if (n == 1 || n == 3) {
        printf("%d", -1);
        return 0;
    }
    for (int i = n / 5; i >= 0; i--) {
        mon = n - 5 * i;
        if (mon % 2 == 0) {
            printf("%d", i + mon/ 2);
            break;
        }
    }
    
}