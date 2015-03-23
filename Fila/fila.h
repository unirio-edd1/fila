#ifndef FILA_H
#define FILA_H
#include <iostream>

class fila
{
protected:
    int tam;    /* Tamanho do vetor */
    int *vetor; /* Vetor de elementos */
    int ini;    /* Posicao do proximo elemento a ser retirado */
    int n;      /* Numero de elementos na fila */
    int proximaPosicao() const;
    int proximoInicio() const;
public:
    bool vazia() const;
    bool cheia() const;
    
    fila(int tamanho = 10);
    virtual ~fila();
    virtual bool remove(int& elemento);
    virtual bool insere(const int& elemento);
};
#endif
