/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int num;
    printf("Digite um numero de 1 a 12");
    scanf("%i", &num);
    if (num == 1 ){
        printf ("Janeiro");
    } else if (num == 2) {
        printf ("Fevereiro");
    } else if (num == 3) {
        printf ("Março");
    } else if (num == 4) {
        printf ("Abril");
    } else if (num == 5) {
        printf ("Maio");
    } else if (num == 6) {
        printf ("Junho");
    } else if (num == 7) {
        printf ("Julho");
    } else if (num == 8) {
        printf ("Agosto");
    } else if (num == 9) {
        printf ("Setembro");
    } else if (num == 10) {
        printf ("Outubro");
    } else if (num == 11) {
        printf ("Novembro");
    } else if (num == 12) {
        printf ("Dezembro");
    
    } else {
        printf ("Numero Invalido");
    
}
    return 0;
}
