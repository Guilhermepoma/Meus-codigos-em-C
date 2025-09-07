#include <stdio.h>

int main() {
    float salario, aumento;
    int cargo;
    
    printf("\n----- Cargos -----\n\n");
    printf("1 - Auxiliar de escritorio\n");
    printf("2 - Secretario(a)\n");
    printf("3 - Cozinheiro(a)\n");
    printf("4 - Entregador\n");
    
    printf("\nDigite seu cargo: ");
    scanf("%d", &cargo);
    
    printf("Digite seu salario: ");
    scanf("%f", &salario);
    
    switch (cargo) {
        case 1:
            aumento = salario * 0.07;
            break;
        case 2:
            aumento = salario * 0.09;
            break;
        case 3:
            aumento = salario * 0.05;
            break;
        case 4:
            aumento = salario * 0.12;
            break;
        default:
            aumento = 0;
            printf("Cargo invalido.\n");
            break;
    }
        
    if (aumento > 0) {
        printf("Valor do aumento: R$ %.2f\n", aumento);
        printf("Novo salario: R$ %.2f\n", salario + aumento);
    }
    
    return 0;
}