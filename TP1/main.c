#include "scanner.h"
#include <stdlib.h>

int main(void)
{
    TOKEN token;
    char *cad[100];
    do
    {
        token = get_token(cad);
        switch(token) {
            case CADENA:
            *cad =
            printf("Cadena: %s\n", cad);
            break;
            case SEPARADOR:
            printf("Separador: ,\n");
            break;
            case ESPACIO:
            break;
        }
    } while(token != FIN_DE_TEXTO);
    printf("Fin de texto: \n");
    return EXIT_SUCCESS;
}

