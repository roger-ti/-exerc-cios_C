/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <math.h>

int main()
{
    int num;
    
    printf("Digite um numero");
    scanf ("%i",&num );
    if (num > 0) {
        printf("%.1f", sqrt(num));
    } else {
        printf("Numero invalido ");
}
    return 0;
}
