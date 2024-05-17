/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int idade;
    int contador = 0;
    int pessoas = 0;

    printf("Digite a idade de 1 a 10 :\n");

    while (pessoas < 5) {
        printf("Pessoa %d: ", pessoas + 1);
        scanf("%d", &idade);

        if (idade > 18) {
            contador++;
        }

        pessoas++;
    }

    printf("Número de pessoas com mais de 18 anos: %d\n", contador);

    return 0;
}
