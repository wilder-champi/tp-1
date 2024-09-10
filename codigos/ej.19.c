#include<stdio.h>
int main()
{
int a, b, dijitos=0;
printf("ingrese un numero");
scanf("%i", &a);
while (a!=0)
{
    a/=10;
    dijitos++;
}
printf("los dijitos de tu numero son %i\n",dijitos);
}