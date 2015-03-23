//
//  fila.cpp
//  Fila
//
//  Created by Diogo Martins on 3/23/15.
//  Copyright (c) 2015 Diogo Martins. All rights reserved.
//

#include <stdio.h>
#include "fila.h"

fila::fila(int tamanho):
    tam(tamanho),
    vetor(new int[tamanho]),
    ini(0),
    n(0)
{}

fila::~fila(){
    delete vetor;
}

bool fila::vazia() const{
    if (n == 0){
        return true;
    }
    return false;
}

bool fila::cheia() const{
    if (n == tam){
        return true;
    }
    return false;
}

int fila::proximaPosicao() const{
    return (ini + n) % tam;
}

int fila::proximoInicio() const{
    return (ini+1) % tam;
}

bool fila::insere(const int &elemento){
    if (!cheia()){
        vetor[proximaPosicao()] = elemento;
        n++;
        return true;
    }
    return false;
}

bool fila::insereInicio(const int &elemento){
    if(!cheia()){
        int proximoElemento = (ini+tam-1) % tam;
        vetor[proximoElemento] = elemento;
        n++;
        return true;
    }
    return false;
}

bool fila::remove(int &elemento){
    if (!vazia()){
        ini = proximoInicio();
        n--;
        return true;
    }
    return false;
}