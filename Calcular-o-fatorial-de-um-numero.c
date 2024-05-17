/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>


int main() {
    int numero, fatorial = 1, i = 1;

    printf("Digite um número inteiro positivo para calcular o fatorial: ");
    scanf ("%d", &numero);

    while (i <= numero) {
        fatorial *= i;
        i++;
    }

    printf("O fatorial de %d é: %d\n", numero, fatorial);

    return 0;
}
