#include <stdio.h>


int main() {
  int a, b, opcao;
    
    

    printf("Digite o primeiro numero:\n");
    scanf("%d", &a);
    printf("Digite o segundo numero:\n");
    scanf("%d", &b);

    printf("1 - Soma\n");
    printf("2 - Subtracao\n");    
    printf("3 - Multiplicacao\n");    
    printf("4 - Divisao\n"); 
    scanf(" %d", &opcao);

    

    switch(opcao) { 
        case 1:
            printf("Soma: %d\n", a + b);
            break;
    
        case 2:
            printf("Subtracao: %d\n", a - b);
            break;
    
        case 3:
            printf("Multiplicacao: %d\n", a * b);
            break;
    
        case 4:
            
            if (b == 0) { 
            printf("Não é possível dividir por 0\n");
            } else {
            printf("Divisao: %d\n", a / b);
            }         
        break;
    }
    
    
  return 0;
}