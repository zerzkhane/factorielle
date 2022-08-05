#include <stdio.h>
#include <stdlib.h>
int factorille(int X){
int I,F,i;
    F = 1;

    for (i = 1; i <=X; i++){
        F = F * i;
    }
}
int main()
{
       int X,A;
    printf("donner un nomber\n");
    scanf("%d", &X);
    A = factorille(X);
    printf("%d", &A);












    return 0;
}
