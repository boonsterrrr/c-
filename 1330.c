#include <stdio.h>

int main() {
    int num1, num2;

    scanf_s("%d %d", &num1, &num2);
    if (num1 > num2) {
        printf(">");
    }
    else if (num1 < num2) {
        printf("<");
    }
    else {
        printf(" == ");
    }

}

//확실히 ''이랑 "" 차이가 크다. ""해야지 내가 원하는게 나오잖아!//