/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdbool.h>

int main() {
    int numero;
    int mul = 1;
    bool inv = false;
   

    printf("Digite um número entre 1 e 10: ");
    scanf("%d", &numero);

    if (numero < 1 || numero > 10) {
        printf("Número inválido.\n");
        inv = true;
    } else {
        printf("Tabuada do %d:\n", numero);
        while (mul <= 10) {
            printf("%d X %d  = %d\n", numero, mul, numero * mul);
            mul++;
        }
    }

    return 0;
}