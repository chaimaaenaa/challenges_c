#include <stdio.h>
void echanger(int a,int b){
    int c = a ;
    a = b ;
    b = c ;
    printf("la valeur a est %d et la valeur de b est %d " , a, b);
}

int main(){
    int a, b;
    printf("Enter la valeur de a: ");
    scanf("%d", &a);
    printf("Enter la valeur de b: ");
    scanf("%d", &b);
    echanger(a, b);
    return 0;
}
/*
#include <stdio.h>

void echanger(int a, int b){
    int c = a;
    a = b;
    b = c;
    printf("A = %d et B = %d\n", a, b);
}

int main(){
    int a, b;
    printf("Enter la valeur de a: ");
    scanf("%d", &a);
    printf("Enter la valeur de b: ");
    scanf("%d", &b);
    printf("A = %d et B = %d\n", a, b);
    echanger(a, b);
    return 0;
}

*/