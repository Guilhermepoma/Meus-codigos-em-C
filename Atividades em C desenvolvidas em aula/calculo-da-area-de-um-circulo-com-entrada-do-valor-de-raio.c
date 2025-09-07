/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.
  
 Cálculo da área de um círculo com entrada do valor de raio
*******************************************************************************/
#include <stdio.h>

int main() {
    float raio, area, PI = 3.14159;

    printf("Digite o valor do raio do círculo: ");
    
    scanf("%f", &raio);
    
    area = PI * raio * raio;
    printf("A área do círculo é: %.2f", area);

    return 0;
}