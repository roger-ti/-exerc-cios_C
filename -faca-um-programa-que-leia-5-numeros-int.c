/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/

#include <stdio.h>

int main() {
    int numeros[5];
    int pares[5], impares[5];
    int cont_pares = 0, cont_impares = 0;

    printf("Digite 5 numeros inteiros:\n");

        for (int i = 0; i < 5; i++) {
        scanf("%d", &numeros[i]);
        if (numeros[i] % 2 == 0) {
            pares[cont_pares] = numeros[i];
            cont_pares++;
        } else {
            impares[cont_impares] = numeros[i];
            cont_impares++;
        }
    }

    
    printf("\nNumeros lidos: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", numeros[i]);
    }

    printf("\nPares: ");
    for (int i = 0; i < cont_pares; i++) {
        printf("%d ", pares[i]);
    }

    printf("\nImpares: ");
    for (int i = 0; i < cont_impares; i++) {
        printf("%d ", impares[i]);
    }

    return 0;
}


