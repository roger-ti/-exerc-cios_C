/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdbool.h>

int main()
{
    int senha = 1234 ;
    int comp;
   
    printf("Digite uma senha");
    scanf  ("%d", &comp);
    while (comp != senha ) {
        printf ("Senha errada ");
      printf("Digite novamente");
      scanf ("%d",&comp);
        
        
}
 printf("Senha correta");
    return 0;
}

