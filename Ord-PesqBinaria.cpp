#include<iostream>
#include <iomanip>

using namespace std;

int buscaBinaria(int vetor[], int tamanho, int valor_buscado){
    int i,inicio,fim,meio,encontrou,valor;
    
    inicio=0;
    fim=tamanho-1;
    encontrou=0;
    int iteracao = 0;
    
    while(inicio<=fim && encontrou==0){
        
        meio=(inicio+fim)/2;
        
        if(valor_buscado>vetor[meio])
        {
            inicio=meio+1;
            valor=vetor[meio];
        }
        
        else if(valor_buscado<vetor[meio])
        {
            fim=meio-1;
            valor=vetor[meio];
        }
        
        else
            encontrou=1;
        
        cout <<"Iteracao: " << iteracao << " - Meio: "<< setw(2) << meio << " - Valor no meio: " << setw(2) << vetor[meio] << endl;
        iteracao++;
    }
    
    if(encontrou==1)
        return meio;
    else
        return -1;
}

int  main(){
    int n = 15;
    int a[n] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
    
    int resultado = buscaBinaria(a, n, 10);
    if(resultado != -1)
        cout << "O valor buscado esta na posicao: " << resultado;
    else
        cout << "Valor não encontrado.";
}
