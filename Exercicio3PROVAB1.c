/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    float Celsius, Fahrenheit;
    printf("Digite a temperatura em  Celsius");
    scanf  ("%f",&Celsius);
    
     Fahrenheit =Celsius * 9 / 5 + 32  ;
     printf("A temperatura em Fahrenheit é: %.2f\n", Fahrenheit);
    
    return 0;
}
