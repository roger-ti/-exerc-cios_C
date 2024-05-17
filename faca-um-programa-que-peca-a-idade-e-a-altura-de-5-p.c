/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main() {
    int idades[5];
    float alturas[5];

    
    printf("Digite a idade e altura de 5 pessoas:\n");
    for (int i = 0; i < 5; i++) {
        printf("Pessoa %d:\n", i + 1);
        printf("Idade: ");
        scanf("%d", &idades[i]);
        printf("Altura: ");
        scanf("%f", &alturas[i]);
    }

    printf("\nIdades e alturas na ordem inversa:\n");
    for (int i = 4; i >= 0; i--) {
        printf("Pessoa %d - Idade: %d, Altura: %.2f\n", i + 1, idades[i], alturas[i]);
    }

    return 0;
}

