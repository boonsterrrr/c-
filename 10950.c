#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main() {

    int t;
    scanf("%d", &t);

    int a, b;
    for (int i = 0; i < t; i++) {
        scanf("%d %d", &a, &b);
        printf("%d \n", a + b);
    }
  
    return 0;
}

// 쓰읍 이거 생각이 잘 안된다 너무 졸려 내일다시!//

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main() {

    int t;
    scanf("%d", &t);
    int j;
    int a, b;
    for (int i = 0; i < t; i++) {
        scanf("%d %d", &a, &b);
        j = a + b;
    }
    printf("%d\n", j);
    return 0;
}

