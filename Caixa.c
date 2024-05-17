/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
   int mes;
    printf("Digite uma opção");
    scanf ("%i", &mes);
    switch(mes){
      
        
        case 1:
        printf("Consulta");
        break;
        
        case 2:
        printf("Saque");
        break;
        
        case 3:
        printf("Depósito");
        break;
        
        case 4:
        printf("sair");
        break;
        
       
        
        default:
        printf("Opção invalida");
        break;
}
    return 0;
}