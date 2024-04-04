/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
   int mes;
    printf("Digite uma letra");
    scanf ("%i", &mes);
    switch(mes){
        case 2:
        printf("Fevereiro Tem 28 dias");
        break;
        
        case 4:
        printf("Abril tem 30 dias");
        break;
        
        case 6:
        printf("Junho Tem 30 dias");
        break;
        
        case 9:
        printf("Setembro Tem 30 dias");
        break;
        
        case 11:
        printf("Novembro Tem 30 dias");
        break;
        
        case 1:
        printf("Janeiro Tem 31 dias");
        break;
        
        case 3:
        printf("Março Tem 31 dias");
        break;
        
        case 5:
        printf("Maio Tem 31 dias");
        break;
        
        case 7:
        printf("Julho Tem 31 dias");
        break;
        
        case 8:
        printf("Agosto Tem 31 dias");
        break;
        
        case 10:
        printf("Outubro Tem 31 dias");
        break;
        
        case 12:
        printf("Desembro Tem 31 dias");
        break;
        
        default:
        printf("Mes invalido");
        break;
}
    return 0;
}


