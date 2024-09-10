#include<stdio.h>
int main()
{
int numero, lol=0, oriental;
printf("coloque un numero\n");
scanf("%i",&numero);
oriental=numero;
while (numero!=0)
{
 lol=lol*10+numero%10;
 numero /=10;
}
if (oriental == lol)
{
    printf("el numero %i es una capicua ",oriental);
}else{
    printf("el numero %i no es capicua ",oriental);

}
return 0;
}