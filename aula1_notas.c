/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    // começou
    float nota1, nota2, media;
    //Entrada de dados
    printf("Digite a primeira nota");
    scanf ("%f", &nota1);
    printf("Digite a Segunda nota");
    scanf("%f", &nota2);
    //nota invalida 
    if (nota1 <= 0.0 || nota2 >=11.0){ 
    printf ("\n Valor não valido");
    }else if (nota1 >=11.0 || nota2<=0.0){
        printf ("\n Valor não valido");
    } else {
    //calcula
    media = (nota1 + nota2 )/2;
    //resultado
     if (media >=6){
    printf("\nVai Fi");
    }else if (media <=4){
        printf("\nvolta lá");
    }else{
        printf("\nVolta Bill");
    }
    }
    
    return 0;
}

