/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    float sal, total;
    
    printf("Digite seu salario: ");
    scanf("%f", &sal);
    
    if(sal <= 600.00){
        printf("seu salario atual é: %.1f", sal);
    } else if (sal > 600.00 && sal <= 1200.00){
        total =(sal * 0.20);
        printf("seu salario atual é: %.1f", total);
    } else if (sal > 1200.00 && sal <= 2000.00){
        total = (sal * 0.25);
        printf("seu salario atual é: %.1f", total);
    } else if (sal > 2000.00){
        printf("seu salario atual é: %.1f", total);
    }
    return 0;
}
