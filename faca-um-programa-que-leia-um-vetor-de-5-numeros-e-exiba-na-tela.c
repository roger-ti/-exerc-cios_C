/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
int contador;    
int numeros [] = {13, 26, 52, 110 ,300};
    for (contador=0; contador<5; contador++ ) {
        printf("%d\n", numeros[contador]);
    }
    return 0;
}

