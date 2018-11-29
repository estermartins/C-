#include <iostream> 
using namespace std;

void troca(char *xp, char *yp) 
{ 
    char temp = *xp; 
    *xp = *yp; 
    *yp = temp; 
} 
  
  
//Imprime o vetor
void imprime(char vetor[], int tamanho) 
{ 
    int i; 
    for (i=0; i < tamanho; i++) 
        cout << vetor[i] << " ";
    cout << "\n"; 
} 

void ordenacaoPorSelecao(char vetor[], int n) 
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
        imprime(vetor, n);
    } 
} 
  

int main() 
{ 
    char vetor[] = {'E','S','T','E','R','P','E','R','E','I','R','A','M','A','R','T','I','N','S'}; 
    int n = sizeof(vetor)/sizeof(vetor[0]); 
    cout << "Vetor Inicial: " << endl;
    imprime(vetor, n);
    cout << endl;
    ordenacaoPorSelecao(vetor, n); 
    cout << "Vetor Ordenado: \n"; 
    imprime(vetor, n); 
    return 0; 
}
