#include <iostream>
#include <cstdlib>
using namespace std;

void mostraVetor(char vet[], int tamanho){
for (char i=0;i<tamanho;i++)
cout << vet[i] << " ";
}

void bolha(char vetor[], int tamanho) {
char temp = ' ';
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
    char vet[] = {'E', 'S', 'T', 'E', 'R', 'M', 'A', 'R', 'T', 'I', 'N', 'S'}; 
    int n = sizeof(vet)/sizeof(vet[0]); 

cout << "O vetor foi preenchido aleatoriamente assim: " <<endl;
mostraVetor(vet, n);
cout << endl;
cout << endl;
bolha(vet,n);
cout << endl << endl << "Depois de ordenado: ";
mostraVetor(vet, n);
return 0;
}
