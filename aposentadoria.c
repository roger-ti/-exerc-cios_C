/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
    {
        int idade, contribuicao ; 
    printf("Qual idade?\n");
    scanf ("%i",&idade );
    printf("Quanto tempo de contribuição?\n");
    scanf ("%i",&contribuicao );
    if (idade > 64 || contribuicao >29 ){
        printf ("pode se aposentar");
    }else if (idade > 59 || contribuicao >24 ){
        printf ("vpode parar");
        } else {
        printf ("Tente outra");
    }
    
    return 0;
}

