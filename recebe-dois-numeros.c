/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    float num1, num2;
        printf("Digite o primeiro Numero");
        scanf ("%f", &num1);
        printf("Digite o segundo numero");
        scanf ("%f",&num2);
        if (num1 < num2){
        printf("Esse é maior");
}else if(num1 > num2){ 
    printf("Esse é");
}else{ (num1 == num2);
    printf ("Numero Igual");
}
    


    return 0;
}