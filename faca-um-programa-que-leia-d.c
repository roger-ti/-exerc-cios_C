/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main() {
    int vetor1[5], vetor2[5], vetor_intercalado[10];

   
    printf("Digite os elementos do primeiro vetor:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &vetor1[i]);
    }

    
    printf("Digite os elementos do segundo vetor:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &vetor2[i]);
    }

   
    int index = 0;
    for (int i = 0; i < 5; i++) {
        vetor_intercalado[index++] = vetor1[i];
        vetor_intercalado[index++] = vetor2[i];
    }

  
    printf("\nVetor intercalado:\n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", vetor_intercalado[i]);
    }
    printf("\n");

    return 0;
}
