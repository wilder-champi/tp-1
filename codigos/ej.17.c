#include <stdio.h>
int main()
{
    int N, t1, t2, siguiente;
    
    printf("Ingrese un número natural : ");
    scanf("%d", &N);

    printf("Los %d primeros términos de la serie de Fibonacci son:\n", N);
    t1=0;
    t2=1;
    int i;
    for ( i = 1; i <= N; i++) {
        if (i == 1) {
            printf("%d\n", t1);
        } else if (i == 2) {
            printf("%d\n", t2);
        } else {
            siguiente = t1 + t2;
            printf("%d\n", siguiente);
            t1 = t2;
            t2 = siguiente;
        }
    }

    return 0;
}
    