/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main() {
    int numeros[5];
    int busca;
    int encontrado = 0;

    
    printf("Digite 5 numeros inteiros:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &numeros[i]);
    }
    
    printf("Digite um numero para buscar: ");
    scanf("%d", &busca);

        for (int i = 0; i < 5; i++) {
        if (numeros[i] == busca) {
            encontrado = 1;
            break;
        }
    }

       if (encontrado) {
        printf("O numero %d foi encontrado no array.\n", busca);
    } else {
        printf("O numero %d nao foi encontrado no array.\n", busca);
    }

    return 0;
}
