/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    // declaracao das variaveis
    char nome[100];
    
    // entrada
    printf("Qual seu nome?");
    scanf("%s", nome);
    
    // saida
    printf("Oi %s!", nome);

    return 0;
}
