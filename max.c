#include <stdio.h>
int Max_2(int x,int y){
    if(x>y) return x;
    return y;
}
int Max_4(int x,int y,int z,int k){
    int Max_2(int,int);
    int max1,max2;
    max1=Max_2(x,y);
    max2=Max_2(z,k);
      return Max_2(max1,max2);
}
int main()
{
    int Max_4(int,int,int,int);
    int x,y,z,k,max;
    printf("Entrez quatre entiers:\n");
    scanf("%d%d%d%d",&x,&y,&z,&k);
    max=Max_4(x,y,z,k);
    printf("les max est: %d\n",max);
    system("pause");
    return 0;
 }   