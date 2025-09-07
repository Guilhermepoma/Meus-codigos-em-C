/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int idade;
    
    printf("Digite sua idade: ");
    scanf("%d", &idade);
    
    if (idade < 0) {
        printf("A idade nao pode ser um numero negativo!\n");
    } else if (idade < 18) {
        printf("Voce e jovem.\n");
    } else if (idade >= 18 && idade < 65) {
        printf("Voce é adulto.\n");
    } else { 
        printf("Voce é idoso.\n");
    }
    
    return 0;
}
