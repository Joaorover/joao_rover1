#include <stdio.h>

int main() {
    int codigo;

    
    printf("[1254] - Sanduíche de Presunto - R$8,00\n");
    printf("[5698] - Churros - R$3,50\n");
    printf("[7114] - Suco de Laranja que parece de Limão com gosto de Tamarindo - R$5,00\n");

    printf("Qual o código do produto\n");
    scanf ("%d", &codigo);

    switch (codigo)
    {
        case 1254:
            printf("Sanduíche de Presunto - R$8,00\n");
            break;
        
        case 5698:
            printf("Churros - R$3,50\n");
            break;
        
        case 7114:
            printf("Suco de Laranja que parece de Limão com gosto de Tamarindo - R$5,00\n");
            break; 
    }   
    
    return 0;
}