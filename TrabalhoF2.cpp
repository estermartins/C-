//Bibliotecas utilizadas no Windows com Dev C++
#include <iostream>
#include <conio.h>

//Bibliotecas utilizadas no Linux com Code::Block
//#include <iostream>
//#include <string>
//#include <stdlib.h>
//#include <stdio.h>

using namespace std; //comando para usar linguagem C++ no Dev C++

struct ficha{
       int valor;
};

// Busca um elemento num vetor
// Devolve a posição do elemento encontrado, caso tenha sucesso na busca
// Retorna -1, caso não encontre
int busca (int x, ficha lista[], int n){
    int indice=-1, i=0;
    while(i<n){
       if(lista[i].valor == x){
          indice = i;
          i = n;
       }
       else
         i++;
    }
    return indice;
}

//Se minha busca tive indice diferente de -1, ele nao inseri um novo elemento, pois foi encontrado na busca
//mas se meu indice na busca for igual a -1, insere um novo elemento, pois nao foi encontrado na busca
int insercao (int x, ficha lista[], int n){
     if ( busca(x, lista, n) == -1 ){ // se sim, elemento não encontrado. Pode inserir
        lista[n].valor=x;
        getchar(); // getchar pode ser usado tanto para linux e windows, pois getch é derivado do getchar.
        return 1; // toda funcao precisa de um retorno, neste é 1, pois o 1 é verdadeiro, ja que no C, de certa forma nao exite boolean.
     }
     else{
         cout << "Elemento ja existe."<< endl;
         getchar();
         return 0; // este é 0, pois é como se fosse falso.
     }
}

//Se o indice for diferente de -1 ele ira remover o elemento desejado, assim todos os vetores depois 
//que o escolhido for removido, serao empurrados, para nao ficar nenhum elemento vazio, e o meu 'i' vai 
//receber o proximo elemento do que for removido.
//Se o indice for igual a -1, nao ira remover, pois o numero nao existe na lista.
int remocao (int x, ficha lista[], int n){
     int indice,i;
     indice=busca(x,lista,n);
     if(indice!=-1){
         for(int i=indice;i<n-1;i++){
                 lista[i].valor=lista[i+1].valor;
         }
         getchar();
         return 1;
     }
     else {
        cout << "Elemento nao existe" << endl;
        getchar();
        return 0;
     }
}

int main(){
    ficha lista[100];
    int j, valor_inserido, valor_removido, valor_procurado, indice, opcao,x ,n=100, ultpos=0;
    srand ((unsigned) time(NULL));

    cout << "Digite qualquer tecla para iniciar geracao de lista";
    getchar();
    cout << endl;
    for(j=0; j<10; j++){
        lista[j].valor = + rand() %100;
    }

    ultpos=10;
    while(1){
        for(j=0; j<ultpos; j++){
            cout << " " << lista[j].valor << " ";
        }
        do{
             cout << "\nDigite uma opcao\n";
             cout << "<1> para inserir um elemento na lista\n";
             cout << "<2> para excluir um elemento da lista\n";
             cout << "<3> para buscar um elemento da lista\n";
             cout << "<4> para sair\n\n";
             cout << "Opcao: ";
             cin >> opcao;
        }
        while(opcao != 1 && opcao != 2 && opcao != 3 && opcao != 4);
            switch (opcao){;
                     case (1):
                          cout << "Digite o valor a ser inserido: ";
                          cin >> valor_inserido;
                          
                             if (insercao(valor_inserido, lista, ultpos)) {
                             ultpos++;
                             cout << " A lista ficou assim: \n";
                             for(j=0; j<ultpos; j++)
                             cout << " " << lista[j].valor << " ";
                             cout<<endl;
                          }
                          else{
                             cout << " A lista nao foi alterada: \n";
                             for(j=0; j<ultpos; j++)
                             cout << " " << lista[j].valor << " ";
                             cout<<endl;
                          }
                          getchar();
                          system("cls"); // no Linux o comando do system para limpar é clear.
                     break;

                     case (2):
                          cout << "Digite o valor a ser removido: ";
                          cin >> valor_removido;

                          if (remocao(valor_removido,lista,ultpos)){
                             ultpos--;
                             cout << " A lista ficou assim: \n";
                             for(j=0; j<ultpos; j++)
                             cout << " " << lista[j].valor << " ";
                          }
                          else{
                             cout << "A lista nao foi alterada: \n";
                             for(j=0; j<ultpos; j++)
                             cout << " " << lista[j].valor << " ";
                          }
                          getchar();
                          system("cls");
                     break;

                     case (3):
                          cout << "\n\nDigite o valor a ser procurado na lista: ";
                          cin >> valor_procurado;

                          indice = busca(valor_procurado, lista, 100);
                          if(indice == -1)
                               cout << "Nao ha na lista o valor procurado. ";
                          else
                               cout << "O elemento procurado esta na posicao: " << indice+1;
                          cout << endl;
                          getchar();
                     break;

                     case (4):
                        return 0;
                     break;
            }
    }
    return 0;
}
