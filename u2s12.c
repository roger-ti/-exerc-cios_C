/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
   float cod, quantidade ;
   

         printf ("Qual Codigo");
    scanf ("%f", &cod);
        printf ("Quantidade");
    scanf ("%f", &quantidade);
    if (cod == 100){
        printf ("%.2f É o valor devido do Cachorro quente  ", quantidade * 1.20) ;
    }else if (cod == 101 ){
        printf ("%.2f É o valor devido do Bauru Siples  ", quantidade * 1.30);
    }else if (cod == 102 ){
        printf ("%.2f É o valor devido do Bauru com Ovo  ", quantidade * 1.50);
    }else if (cod == 103 ){
        printf ("%.2f É o valor devido do Hamburguer  ", quantidade * 1.20);
    }else if (cod == 104 ){
        printf ("%.2f É o valor devido do Cheeseburguer  ", quantidade * 1.70);
    }else if (cod == 105 ){
        printf ("%.2f É o valor devido do Suco  ", quantidade * 2.20);
    }else if (cod == 106 ){
        printf ("%.2f É o valor devido do Refrigerante  ", quantidade * 1.00);
    } else {
        printf ("Codido do Produto invalido");
        
        
    }
    return 0;
}



