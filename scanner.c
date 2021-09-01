#include "scanner.h"

char c;

void get_token()
{
    TOKEN token;
    char carac;
    do
    {
    char *buffer;
    int i = 0;
    c = getchar();
    carac = que_caracter_es();
    switch(carac){
    case ALGO:
        while(carac == ALGO){
        buffer[i] = c;
        i++;
        c = getchar();
        carac = que_caracter_es();
        }
        buffer[i] = '\0';
        ungetc(c,stdin);
        token = CADENA;
        break;
    case COMA:
        ungetc(c,stdin);
        token = SEPARADOR;
        break;
    case ESP:
        ungetc(c,stdin);
        token = ESPACIO;
        break;
    case FDT:
        ungetc(c,stdin);
        token = FIN_DE_TEXTO;
        break;
    }
    switch(token) {
        case CADENA:
        printf("Cadena: %d\n", buffer);
        break;
        case SEPARADOR:
        printf("Separador: ,\n");
        break;
        case ESPACIO:
        break;
    }
    } while(token != FIN_DE_TEXTO);
    if(token == FIN_DE_TEXTO)
        printf("Fin de texto: \n");
}


CARACTER que_caracter_es()
{
    if(isspace(c))
        return ESP;
    else if(c == ',')
        return COMA;
    else if(c == EOF)
        return FDT;
    else
        return ALGO;
}
