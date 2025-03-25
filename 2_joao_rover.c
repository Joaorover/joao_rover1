#include <stdio.h>

int main() {
  int estado;

  printf("Selecione o estado:\n");

  printf("[1] - Acre\n");
  printf("[2] - Alagoas\n");
  printf("[3] - Amapá\n");
  printf("[4] - Amazonas\n");
  printf("[5] - Bahia\n");
  printf("[6] - Ceará\n");
  printf("[7] - Distrito Federal\n");
  printf("[8] - Espírito Santo\n");
  printf("[9] - Goiás\n");
  printf("[10] - Maranhão\n");
  printf("[11] - Mato Grosso\n");
  printf("[12] - Mato Grosso do Sul\n");
  printf("[13] - Minas Gerais\n");
  printf("[14] - Pará\n");
  printf("[15] - Paraíba\n");
  printf("[16] - Paraná\n");
  printf("[17] - Pernambuco\n");
  printf("[18] - Piauí\n");
  printf("[19] - Rio de Janeiro\n");
  printf("[20] - Rio Grande do Norte\n");
  printf("[21] - Rio Grande do Sul\n");
  printf("[22] - Rondônia\n");
  printf("[23] - Roraima\n");
  printf("[24] - Santa Catarina\n");
  printf("[25] - São Paulo\n");
  printf("[26] - Sergipe\n");
  printf("[27] - Tocantins\n");
  scanf("%d", &estado);

  switch (estado) { 
    
    case 16:
    case 21:
    case 24:
        printf("Região Sul");
    break;

    case 8:
    case 25:
    case 19:
    case 13:
        printf("Região Sudeste");
    break;

    case 7:
    case 11:
    case 12:
    case 9:
        printf("Região Centro-Oeste");
    break;

    case 1:
    case 3:
    case 4:
    case 14:
    case 22:
    case 23:
    case 27:
        printf("Região Norte");
    break;

    default:
        printf("Região Nordeste");
    }

  return 0;
}