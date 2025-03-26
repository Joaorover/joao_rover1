#include <stdio.h>


int main() {
    char categoria, subcategoria;

    printf("Escolha uma categoria:\n");
    printf("[F] - Filme\n");
    printf("[S] - Serie\n");
    printf("[D] - Documentario\n");
    scanf(" %c", &categoria);

    switch (categoria) {
        case 'F':
        case 'f':
            printf("Escolha uma subcategoria: \n");
            printf("[A] - Ação\n");
            printf("[S] - Suspense\n");
            scanf(" %c", &subcategoria);
                
                switch (subcategoria) {
                case 'A':
                case 'a':
                    printf("SUGESTÃO: Batman: O cavaleiro das trevas \n");
                    break;
                case 'S':
                    printf("SUGESTÃO: A Órfã \n");
                    break;
                }

        case 'S':
        case 's':
            printf("Escolha uma subcategoria: \n");
            printf("[D] - Drama\n");
            printf("[C] - Comédia\n");
            scanf(" %c", &subcategoria);

                switch (subcategoria) {
                case 'D':
                case 'd':
                    printf("SUGESTÃO: Revenge \n");
                    break;
                case 'C':
                case 'c':
                    printf("SUGESTÃO: Comédia \n");
                    break;
                    printf("SUGESTÃO: How I met your mother \n");
                    break;
                }

        case 'D':
        case 'd':
            printf("Escolha uma subcategoria: \n");
            printf("[I] - Investigação\n");
            printf("[Ci] - Ciência\n");
            scanf(" %c", &subcategoria);
            
                switch (subcategoria) {
                case 'I':
                case 'i':
                    printf("SUGESTÃO: Deep web \n");
                    break;    
                case 'C':
                case 'c':
                    printf("SUGESTÃO: Terra \n");
                    break;
                }
    }    
                
                
                    
                    
  return 0;
}