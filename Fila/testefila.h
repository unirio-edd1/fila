#ifndef TESTEFILA_H
#define TESTEFILA_H
#include "fila.h"

class testefila : public fila
{
public:
    testefila(int tamanho = 10);
    void imprime() const;
    int menu() const;
};
#endif