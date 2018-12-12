using namespace std;
#include <iostream>
// Imprime o vetor
void imprime(char vetor[], char n) 
{ 
    char i; 
    for (i=0; i < n; i++) 
    	cout << vetor[i] << " "; 
    cout << "\n"; 
} 
void ordenacaoPorInsercao(char vetor[], char n) 
{ 
    char i, chave, j; 
    for (i = 1; i < n; i++) 
    { 
    	chave = vetor[i]; 
    	j = i-1; 
    
    	/* Move os elementos do vetor[0 ... i-1] que são
    	maiores do que a chave para uma posição a frente*/
    	while (j >= 0 && vetor[j] > chave) 
    	{ 
    		vetor[j+1] = vetor[j]; 
    		j = j-1; 
    	} 
    	vetor[j+1] = chave; 
    	imprime(vetor, n);
    } 
} 

int main() 
{ 
	char vetor[] = {'O','R','D','E','N','A'}; 
	int n = sizeof(vetor)/sizeof(vetor[0]); 
    cout << "Vetor Inicial:" << endl;
    imprime(vetor, n);
	ordenacaoPorInsercao(vetor, n); 
	imprime(vetor, n); 

	return 0; 
}
