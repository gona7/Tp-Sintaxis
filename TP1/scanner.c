#include "scanner.h"

char c;

TOKEN get_token(char *buffer)
{
    TOKEN tk;
    CARACTER carac;
    do
    {
    char *buffer[100];
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
        tk = CADENA;
        return tk;
    case COMA:
        ungetc(c,stdin);
        tk = SEPARADOR;
        return tk;
    case ESP:
        ungetc(c,stdin);
        tk = ESPACIO;
        return tk;
    }
    } while(carac != FDT);
    tk = FIN_DE_TEXTO;
    return tk;

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
