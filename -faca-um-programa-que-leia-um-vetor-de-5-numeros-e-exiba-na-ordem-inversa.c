/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
int contador;    
int numeros [] = {13, 26, 52, 110 ,300};
    for (contador=5; contador>0; contador-- ) {
        printf("%d\n", numeros[contador]);
    }
    return 0;
}