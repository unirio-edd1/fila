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
            case 4:
                cout << "Entre com o item para adicionar no início da fila:\n";
                cin >> Item;
                if(!Fila.insereInicio(Item))
                    cout << "Fila cheia. \n";
                break;
            case 5:
                if (Fila.removeFim(Item)){
                    cout << "Item " <<
                    Item << " removido.\n";
                }
                else
                    cout << "Fila vazia.\n";
                break;
            case 6:
                int pos;
                cout << "Entre com um indice a ser consultado:\n";
                cin >> pos;
                if (Fila.consultaPosicao(pos, Item)){
                    cout << pos << " elemento da fila: " << Item << "\n";
                }
                else
                    cout << "Fila vazia ou valor fora do escopo.\n";
                break;
        }
    system("PAUSE");
    return EXIT_SUCCESS;
}