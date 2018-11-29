#include <iostream> 
using namespace std;

void troca(int *xp, int *yp) 
{ 
    int temp = *xp; 
    *xp = *yp; 
    *yp = temp; 
} 
  
  
//Imprime o vetor
void imprime(int vetor[], int tamanho) 
{ 
    int i; 
    for (i=0; i < tamanho; i++) 
        cout << vetor[i] << " ";
    cout << "\n"; 
} 

void ordenacaoPorSelecao(int vetor[], int n) 
{ 
    int i, j, min_idx; 
  
    //Loop para variar o limite do vetor.
    for (i = 0; i < n-1; i++) 
    { 
        // Encontrar o menor elemento na parte não ordenada
        min_idx = i; 
        for (j = i+1; j < n; j++) 
          if (vetor[j] < vetor[min_idx]) 
            min_idx = j; 
  
        // Trocar o menor elemento com o primeiro da parte não ordenada
        troca(&vetor[min_idx], &vetor[i]);
    } 
} 
  

int main() 
{ 
    int n = 1000;
    int vetor[n]; 
    
    for (int i = 0; i < n; i++)
        vetor [i] = rand()%100;
    

    cout << "Vetor Inicial: " << endl;
    imprime(vetor, n);
    cout << endl;
    ordenacaoPorSelecao(vetor, n); 
    cout << "Vetor Ordenado: \n"; 
    imprime(vetor, n); 
    return 0; 
} 
