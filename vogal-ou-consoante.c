/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    char letra;
    printf("Digite uma letra");
    scanf ("%c", &letra);
    switch(letra){
        case 'a':
        printf("Vogal");
        break;
        
        case 'e':
        printf("Vogal");
        break;
        
        case 'i':
        printf("Vogal");
        break;
        
        case 'o':
        printf("Vogal");
        break;
        
        case 'u':
        printf("Vogal");
        break;
        
        case 'w':
        printf("Vogal");
        break;
        case 'y':
        printf("Vogal");
        break;
        default:
        printf("Consoante");
        break;
}
    return 0;
}
