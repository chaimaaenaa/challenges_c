#include <stdio.h>
#include <math.h>
int Carre(int x){
    return pow(x, 2);
}
void Affiche_Carre(int T[5]){
    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", Carre(T[i]));
    }
}
int main(){
    int T[5];
    for (int i = 0; i < 5; i++)
    {
        printf("Enter element %d : ", i + 1);
        scanf("%d", &T[i]);
    }
    Affiche_Carre(T);
    return 0;
}
