#include<stdio.h>
int main()
{
int a, b, c, v, resultado;
printf("coloque un numero:");
scanf("%i", &a);
printf("coloque otro numero:");
scanf("%i", &b);
c=2;
resultado=a;
while (c<=b)
{
    printf(" %i",resultado);
    resultado=resultado+a;
    c++;
    

}
printf("\nel resultado es: %i\n",resultado);
}