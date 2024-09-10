#include <stdio.h>

int main() {
    char letra;

    printf("Ingrese una letra: ");
    scanf(" %c", &letra);

    char inicial = 'a';
    if (letra >= 'A' && letra <= 'Z') {
        inicial = 'A';
    }

    for (char i = inicial; i <= letra; i++) {
        printf("%c ", i);
    }
    return 0;
}
