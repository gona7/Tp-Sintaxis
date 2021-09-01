#ifndef SCANNER_H_INCLUDED
#define SCANNER_H_INCLUDED

#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

typedef enum
{
    CADENA,
    SEPARADOR,
    ESPACIO,
    FIN_DE_TEXTO
} TOKEN;

typedef enum
{
    ALGO,
    COMA,
    FDT,
    ESP
} CARACTER;


CARACTER que_caracter_es();
void get_token();

#endif
