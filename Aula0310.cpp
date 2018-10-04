#include <iostream>
using namespace std;

int max(int vetor[], int tam){
    int maior = vetor[0];
    for(int contador = 1; contador < tam; contador++)
    {
        if(vetor[contador] > maior){
            maior = vetor[contador];
        }
    }
    return maior;
}
int main(){
    int vetor[6]={1,2,3,4,5,6};
    cout << max(vetor,6);
}

#include <iostream>
using namespace std;

int max(int vetor[], int tam){
    int maior = vetor[0];
    for(int contador = 1; contador < tam; contador++)
    {
        if(vetor[contador] > maior){
            maior = vetor[contador];
        }
    }
    return maior;
}
int main(){
    int vetor[6]={1,2,3,4,5,6};
    cout << max(vetor,6);
}
