Exercícios relacionados ao slide 2(Introdução ao C++) da matéria de Algoritmos.

1. O que é a estrutura de repetição While? Como ela funciona? Faça um programa de exemplo.
2. O que é a estrutura de repetição For? Como ela funciona? Faça um programa de exemplo.
3. Faça um programa simples, utilizando essas duas estruturas para multiplicar os número no intervalo de 1 a 100.
4. Faça um programa que executa 100 iterações e imprime a iteração atual.
5. Veja o que é a sequência de Fibonacci.
6. Faça o cálculo da sequência de Fibonacci utilizando essas estruturas.
7. Faça um algoritmo que lê várias palavras e informa a posição da que começa com a. 
(Crie um vetor de string, e coloque apenas uma com a no começo).
8. Imagine que o Atlético e o Cruzeiro participaram de partidas cada. 
Crie um vetor desse tamanho para cada time. 
Em cada posição do vetor coloque o número de pontos que cada um obteve naquela partida (0 para derrota, 1 para empate e 3 para vitória). 
Faça um loop que cálcula a soma da pontuação de cada time.


RESPOSTAS 
1. A estrutura WHILE 

8. #include <iostream>
using namespace std;

int main()
{
 int tam = 5; 
    int cru[tam] = {3,1,3,3,3}; 
    int atl[tam] = {0,1,0,0,0}; 
    int pontos_cru = 0; 
    int pontos_atl = 0;
    for(int i = 0; i < tam; i++) 
    {
    pontos_cru = pontos_cru + cru[i]; 
    pontos_atl = pontos_atl + atl[i];
    } 
    if(pontos_cru > pontos_atl) 
    cout << pontos_cru << "Cruzeiro campeao"; 
    else if (pontos_cru == pontos_atl) 
    cout << "Empate"; 
    if(pontos_atl > pontos_cru)     
    cout << pontos_atl << "Atletico campeao"; 
    return 0;     
}
