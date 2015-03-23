#include "testefila.h"

using namespace std;

testefila::testefila(int tamanho)
: fila(tamanho)
{}

void testefila::imprime() const
{
    int i, j;
    if (vazia())
        cout << "Fila estah vazia.\n";
    else
        for (i = ini, j = 1; j <= n; j = j + 1, i = (i + 1) % tam)
            cout << j << ' ' << vetor[i] << endl;
}

int testefila::menu() const
{
    int escolha;
    
    cout << "--------------------------\n";
    cout << "Selecione a opcao:\n";
    cout << "1. Insere elemento na fila.\n";
    cout << "2. Remove elemento da fila.\n";
    cout << "3. Imprime elementos da fila.\n";
    cout << "4. Insere elemento no início da fila.\n";
    cout << "5. Remove elemento do final da fila.\n";
    cout << "6. Consultar um elemento da fila.\n";
    cout << "0. Fim.\n";
    cout << "Opcao: ";
    cin >> escolha;
    return escolha;
}