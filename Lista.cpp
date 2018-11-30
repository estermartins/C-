#include <iostream>
#include <cstdlib>


class Node
{
    public:
        Node* proximo;
        int valor;
};

using namespace std;

class ListaEncadeada
{
    public:
        int tamanho;
        Node* inicio;
    
        ListaEncadeada();
        ~ListaEncadeada();
        void add(int valor);
        void print();
};

ListaEncadeada::ListaEncadeada(){
    this->tamanho = 0;
    this->inicio = NULL;
}

ListaEncadeada::~ListaEncadeada(){
    cout << "Lista Deletada!";
}

//adiciona um item sempre no começo da lista
void ListaEncadeada::add(int valor){
    Node* node = new Node();
    node->valor = valor;
    node->proximo = this->inicio;
    this->inicio = node;
    this->tamanho++;
}


void ListaEncadeada::print(){
    Node* atual = this->inicio;
    int i = 1;
    while(atual){
        cout << i << ": " << atual->valor << endl;
        atual = atual->proximo;
        i++;
    }
}

int main()
{
    srand ( time(NULL) );
    ListaEncadeada* lista = new ListaEncadeada();
    for (int i = 0; i < 100; ++i)
    {
        int valor = rand() % 100;
        cout << valor << endl;
        lista->add(valor);
        if(i == 50){
            cout << "Tamanho da Lista: " << lista->tamanho << endl;
        }
    }
    
    lista->print();
    cout << "Tamanho da Lista " << lista->tamanho << endl;
    delete lista;
    return 0;
}
