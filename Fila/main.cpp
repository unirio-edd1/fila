#include <iostream>
#include <cstdlib>
#include "testefila.h"

using namespace std;

int main(int argc, char *argv[])
{
    testefila Fila(2);
    int escolha, Item;
    while (escolha = Fila.menu())
        
        switch(escolha) {
            case 0:
                return 0;
            case 1:
                cout << "Entre com o item para adicionar: ";
                cin >> Item;
                if ( ! Fila.insere(Item) )
                    cout << "Fila cheia.\n";
                break;
            case 2:
                if (Fila.remove(Item)){
                    cout << "Item " <<
                    Item << " removido.\n";
                }
                else
                    cout << "Fila vazia.\n";
                break;
            case 3:
                cout << "Conteudo da fila:\n";
                Fila.imprime();
                break;        
        }
    system("PAUSE");
    return EXIT_SUCCESS;
}