/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int num;
    printf("Digite um numero Bill");
    scanf ("%i", &num);
    
switch(num){
    case 1:
        printf("Janeiro");
        break;
        
    case 2:
         printf("Fevereiro");
        break;
        
    case 3:
        printf("Março");
        break;
        
    case 4:
        printf("Abril");
        break;
        
    case 5:
        printf("Abril");
        break;
    case 6:
        printf("Junho");
        break;
        
    case 7:
        printf("Julho");
        break;
        
    case 8:
        printf("Agosto");
        break;
        
    case 9:
        printf("Setembro");
        break;
        
    case 10:
        printf("Outubro");
        break;
        
    case 11:
        printf("Novembro");
        break;
        
    case 12:
        printf("Dezembro");
        break;
        
    default:
        printf("Mes invalido");
        break;
    }
    

    return 0;
}

