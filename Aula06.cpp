#include <iostream>
#include <cstdlib>
using namespace std;

void mostraVetor(int vet[], int tamanho){
	for (int i=0;i<tamanho;i++)
		cout << vet[i] << " ";
}

void bolha(int vetor[], int tamanho) {
	int temp = 0;
	bool trocou = false;
	for (int i=tamanho-1;i>=1;i--){
		for (int j=1; j<tamanho; j++) {
			if (vetor[j]<vetor[j-1]){
				temp = vetor[j];
				vetor[j]=vetor[j-1];
				vetor[j-1]=temp;
				trocou = true;
			}
		}
		if (!trocou)
			break;
		mostraVetor(vetor, tamanho);
		cout << endl;
	}
}

int main() {
    int n = 5;
	int vet[n];
	// inicializa o gerador de números randômicos para preenchermos o vetor com números aleatórios
	srand(time(NULL));
	for (int i=0;i<n;i++)
		vet[i] = rand() % 100 + 1;
	
	cout << "O vetor foi preenchido aleatoriamente assim: " <<endl;
	mostraVetor(vet, n);
	cout << endl;
	cout << endl;
	bolha(vet,n);
	cout << endl << endl << "Depois de ordenado: ";
	mostraVetor(vet, n);
	
	return 0;
}
