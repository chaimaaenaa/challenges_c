#include <stdio.h>

int add(int x, int y)
{
    return x + y;
}

int main()
{
    int a, b;
    printf("enter la valeur a :");
    scanf("%d", &a);
    printf("enter la valeur b :");
    scanf("%d", &b);
    printf("la somme et  : %d", add(a, b));
    return 0;
}
