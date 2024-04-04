/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    char equa ;
    float num1, num2 ;
    printf("Digite uma equação ");
        scanf ("%s",&equa);
        printf("Digite o primeiro Numero");
        scanf ("%f", &num1);
        printf("Digite o segundo numero");
        scanf ("%f",&num2);
        
        switch (equa){
        case '+':
        printf("%.2f", num1 + num2 );
        break;
        case '-':
        printf("%.2f", num1 - num2 );
        break;
        case '*':
        printf("%.2f", num1 * num2 );
        break;
        case '/':
        printf("%.2f", num1 / num2 );
        break;
        default:
        printf("Dados Invalidos");
        break;
        }

    return 0;
}


