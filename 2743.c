#include <stdio.h>


int main()
{
    char a[100];
    scanf("%s", a);
    int b = 0;
    for (int i = 0; a[i] != '\0'; i++)
        b++;
    printf("%d", b);
    
}