/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main() {
    int alunos, contador = 0;
    float peso, soma_peso = 0.0, media_peso;

    printf("Quantos alunos tem em sua academia? ");
    scanf("%d", &alunos);
    while (contador < alunos ) {
        contador ++;
  printf("Qual peso " );
    scanf("%f", &peso);
    media_peso = alunos * peso /2;
       }
        printf("%.2f Essa é a media dos pesos dos alunos  ", media_peso );
    return 0;
}
