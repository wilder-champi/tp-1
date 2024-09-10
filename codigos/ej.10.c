#include <stdio.h>
int main()
{
    int num, ki, x=1;
    ki =1;
    printf("ingrese un numero");
    scanf("%i", &num);
    while (x<=num)
    {
        ki=ki*x ;
        x++;
        printf("%i ",ki);
    }
        return 0;
    
}