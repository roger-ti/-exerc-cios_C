/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main ()
{
  float nota1;
  printf ("Digite uma nota Bill");
  scanf ("%f", &nota1);
  if (nota1 > 85 && nota1 < 101)
	{

	  printf ("A");
	}
  else if (nota1 > 60 && nota1 < 86)
	{

	  printf ("B");

	}
   else if (nota1 > 35 && nota1 < 61)
	{
      printf ("C");
	}
   else if (nota1 > 1 && nota1 < 34)
	{
      printf ("D");
	} else { 
	  printf ("E");
}

  return 0;
}

