#include<stdio.h>
int main()
{
    int a, b;
    printf("coloque un numero");
    scanf("%i", &a);
    b=1;
    do
    {
        printf("%i \n",b);
        ++b;
    } while (b<=a);
 

    return 0;
}
 