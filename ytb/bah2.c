#include <stdio.h>
int main(){
    char T[6];
    int i ;
    T[0]='A';
    T[1]='B';
    T[2]='C';
    T[3]='D';
    T[4]='E';
    T[5]='F';
    printf("'les voyels sont :'\n");
    for(int i=0 ; i<6 ; i++){
        printf("%c \n",T[i]);
    }

  return 0; 
}