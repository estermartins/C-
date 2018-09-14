Atividades para fazer em sala: 

1 - Execute e explique o que é feito no código abaixo: 

#include <iostream> 

using namespace std; 

int main() 
{ 
     int numero; // usada para leitura da sequencia // 
     int quadrado; // guarda o quadrado do numero lido // 
 
     cout << endl << "\tCalculo do quadrado de um número\n"; 
     cout << "\nDigite o número que você deseja saber o quadrado ou zero para sair:\n"; 
     cin >> numero; 
 
     while (numero != 0) { 
          quadrado = numero * numero; 
          cout << "O quadrado do numero " << numero << " é "<< quadrado <<" \n"; 
          cin >> numero; 
     } 
 
    return 0; 
} 

  

2 - Documente com comentários o código abaixo, que dado um número inteiro positivo n, 
calcular a soma dos n primeiros números inteiros positivos. Explique como a lógica do algoritmo faz esse cálculo. 

#include <iostream> // inclui biblioteca //
using namespace std; // conjunto de funcoes utilizadas //

int main() { 
    int n; // guarda o numero dado 
    int i; // contador, para controle do loop  
    int soma; // guarda as somas parcias 

    cout << "\n\tCalculo da soma dos n primeiros inteiros positivos\n"; // imprime o calculo da soma dos numeros //
 
    //Inicializacoes 
    cout << "\nDigite o valor de n: "; // imprime o valor de n //
    cin >> n; // guarda a variavel // 
    soma = 0; // a soma inicializa com valor 0 //
    i = 1; // primeiro numero inteiro da variavel //
 
    // Calculo da soma 
    while (i <= n) { // comando inicia o loop // 
        soma = soma + i; // loop vai rodar com o comando de que e acumulado o valor de +1 (1ª interacao = 0+1, 2ª = 1+1, e assim por diante) //
        i = i + 1; // 
    } 
 
    //Escreve a resposta 
    cout << "A soma dos " << n << " primeiros inteiros positivos é " << soma;; 
 
    return 0; 
} 

  

3 - Altere o programa 2, para que eles tenham a mesma funcionalidade, porém o cálculo deve ser feito por uma função. 
Siga o exemplo da alteração feita no programa 1, com o mesmo propósito, para servir de base para a modificação no programa 2. 

Programa da questão 1 alterado para utilizar função: 

#include <iostream> 

using namespace std; 

int calcula_quadrado(int numero){ 
    return numero * numero; //Multiplica o numero por ele mesmo, gerando o quadrado 
} 

int main() 
{ 
    int numero; // usada para leitura da sequencia // 
    int quadrado; // guarda o quadrado do numero lido // 

    cout << endl << "\tCalculo do quadrado de um número\n"; 
    cout << "\nDigite o número que você deseja saber o quadrado ou zero para sair:\n"; 
    cin >> numero; 

    while (numero != 0) { 
        quadrado = calcula_quadrado(numero); //modificação com chamada da função 
        cout << "O quadrado do numero " << numero << " é "<< quadrado <<" \n"; 
        cin >> numero; 
    } 

    return 0; 
} 

  

4 - Crie um programa que, dado um número, verifica se ele é ímpar. 
Você pode utilizar o programa feito em sala para verificar se um número é par. 

5. Uma padaria anotou diariamente durante o mês de agosto a quantidade de pães vendidos. 
Determine, com a ajuda de um programa, em que dia desse mês ocorreu a maior venda e qual foi 
a quantidade de pães vendidade nesse dia. 
Você pode utilizar o programa para encontrar o maior item de um 
vetor e a posição desse item, para fazer essa verificação, conforme visto em sala. 
Como montar a estrutura: Crie um vetor de números inteiros, contendo a quantidade de pães vendidas no dia. 
Imagine que na posição 0 seria o dia 1, na posição 1 seria o dia 2 e assim por diante.  
     
RESPOSTAS
1.
#include <iostream> // inclui biblioteca-pacote //

using namespace std; // conjunto de funcoes utilizadas //

int main() // funcao principal que inicia o codigo //
{ 
     int numero; // declaracao de uma variavel do tipo inteira e sera usada para leitura da sequencia // 
     int quadrado; // declaracao de uma variavel do tipo inteira e que guarda o quadrado do numero lido // 
 
     cout << endl << "\tCalculo do quadrado de um número\n"; // (cout = imprime na tela o comando), (\t = centraliza a escrita), (\n = quebra de linha), (<< = saida) //
     cout << "\nDigite o número que você deseja saber o quadrado ou zero para sair:\n"; 
     cin >> numero; // (cin >> = entrada, guarda a variavel) // 
 
     while (numero != 0) { // comando de loop = se o numero for diferente de 0... // 
          quadrado = numero * numero; // a variavel quadrado que e igual a variavel numero elevado a quadrado //
          cout << "O quadrado do numero " << numero << " é "<< quadrado <<" \n"; // imprime o comando //
          cin >> numero; // guarda a variavel numero //
     } 
 
    return 0; // comando que interrompe o loop //
}

