/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int cod, quantidade ;
   

    printf ("Qual Codigo");
    scanf ("%d", &cod);
    
    printf ("Qual Quantidade");
    scanf ("%d", &quantidade);
    
        
        
    switch (cod){
     case 100:
        printf("cachorro quente: %.2f\n",  quantidade * 1.20);
        break;
      case 101:
        printf("Bauru Simples: %.2f\n",  quantidade * 1.30);
        break;
      case 102:
        printf("Bauru com Ovo: %.2f\n",  quantidade * 1.50);
        break;
     case 103:
        printf("Hamburguer: %.2f\n",  quantidade * 1.20);
        break;
     case 104:
        printf("Cheeseburguer: %.2f\n",  quantidade * 1.70);
        break;
     case 105:
        printf("Suco: %.2f\n",  quantidade * 2.20);
        break;
     case 106:
        printf("Refrigerente: %.2f\n",  quantidade * 2.20);
        break;
        default:
        printf("Dados Invalidos");
        break;
        
    }
    return 0;
}
