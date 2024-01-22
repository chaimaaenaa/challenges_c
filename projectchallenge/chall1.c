#include <stdio.h>

void add(int x, int y){
    printf("%d", x + y);
}

int main(){
    int a, b;
    printf("Enter la valeur de a: ");
    scanf("%d", &a);
    printf("Enter la valeur de b: ");
    scanf("%d", &b);
    add(a, b);
    return 0;
}