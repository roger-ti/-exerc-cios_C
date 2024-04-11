/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
     int num1, num2, num3;
        printf("Digite o primeiro Numero");
        scanf ("%i", &num1);
        printf("Digite o segundo numero");
        scanf ("%i",&num2);
        printf("Digite o terceiro numero");
        scanf ("%i",&num3);
      int menor = num1;  

    if (num2 < menor) {
        menor = num2;  
    }
    if (num3 < menor) {
        menor = num3;  
    }

    
    printf("O menor valor é: %d\n", menor);
    return 0;
}

