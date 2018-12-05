#include <iostream>

using namespace std;

/* Function to print an array */
void imprimeVetor(int arr[], int size)
{
	int i;
	for (i=0; i < size; i++)
		cout << arr[i] << " ";
	cout << endl;
}

//Função de troca
void troca(int* a, int* b)
{
	int t = *a;
	*a = *b;
	*b = t;
}

//função que seleciona o último elemento como pivot e colocar todos os menores
//que ele de um lado e todos os maiores do outro
int particionar (int vetor[], int low, int high)
{
	int pivot = vetor[high]; // pivot
	int i = (low - 1);
    cout << i << endl;
	for (int j = low; j <= high - 1; j++)
	{
		if (vetor[j] <= pivot)
		{
			i++;
			troca(&vetor[i], &vetor[j]);
		}
	}
	troca(&vetor[i + 1], &vetor[high]);
	return (i + 1);
}

//Algoritmo do Quicksort, ele faz a partição inicial e depois vai chamando
//para cada perte
void quickSort(int vetor[], int low, int high)
{
	if (low < high)
	{
		//j é a posição atual do pivo, que já está no local correto
		int j = particionar(vetor, low, high);
		//Chama o quicksort para a parte de cima e a parte de baixo
		quickSort(vetor, low, j - 1);
		quickSort(vetor, j + 1, high);
	}
}

// Driver program to test above functions
int main()
{
	int vetor[] = {10, 7, 8, 9, 1, 5};
	int n = sizeof(vetor)/sizeof(vetor[0]);
	quickSort(vetor, 0, n-1);
	cout << "Vetor Ordenado: " << endl;
	imprimeVetor(vetor, n);
	return 0;
}
