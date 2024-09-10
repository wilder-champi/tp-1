#include <stdio.h>
#include <string.h>
#define max 100
int main(){

    char nombre[max];
    printf("como te llamas\n");
    fgets(nombre,max, stdin);
    printf("hola %s \n",nombre);

    return 0;
}