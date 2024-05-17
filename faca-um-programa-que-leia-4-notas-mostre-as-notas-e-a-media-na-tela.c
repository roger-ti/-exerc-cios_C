/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main() {
    float notas[4];
    float soma = 0;
    float media;

  
    for (int i = 0; i < 4; i++) {
        printf("Digite a nota %d: ", i+1);
        scanf("%f", &notas[i]);
        soma += notas[i]; 
    }

    
    media = soma / 4;

   
    printf("Notas inseridas:\n");
    for (int i = 0; i < 4; i++) {
        printf("Nota %d: %.2f\n", i+1, notas[i]);
    }
    printf("Média das notas: %.2f\n", media);


    return 0;
}



