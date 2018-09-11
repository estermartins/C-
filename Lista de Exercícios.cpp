/******************************************************************************
 Exercício 1 - Crie um programa em C++, que recebe uma palavra como parâmetro e imprime.
*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    string batata;
    cout << "Digite uma palavra: " << "\n";
    cin >> batata;
    cout << "A parlavra digitada foi: " << batata << "\n";
}

/******************************************************************************
 Exercício 2 - Crie um programa em C++ que atribui o valor 20 para uma variável inteira, o valor
30 para outra variável inteira e some esses dois valores e armazene em outra variável.
*******************************************************************************/

#include <iostream>

using namespace std;
int somar(int a, int b)
{
    return a + b;
}
int main()
{
    int a = 20;
    int b = 30;
    int X = a + b;
    
    cout <<"Conteudo de a: "<< a << "\n";
    cout <<"Conteudo de b: "<< b << "\n";
    cout <<"O valor de X e "<< somar(a,b) << "\n";
}

/******************************************************************************
 Exercício 3 - Crie um programa em C++ com uma variável do tipo String, contendo um nome qualquer.
Crie uma segunda variável do tipo Float, contendo o valor do salário dessa pessoa. Imprima:

A pessoa <Nome da Pessoa>, recebe R$<Salário da pessoa>.
*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
   string nome;
   cin >> nome;
   float salario = 2000;
   cout << "O salario de " << nome << " e de aproximadamente R$ " << salario;
}

/******************************************************************************
Exercício 4 - Crie um programa em C++ que compara o valor do salário de duas pessoas, e informa
qual salário é maior.

Dica - Utilize a instrução if para fazer comparações e os operadores > ou < para comparar.
*******************************************************************************/

#include <iostream>

using namespace std;
int main()
{
    int salario;
    int pessoa1[1] = {2000};
    int pessoa2[1] = {2300};
    if (salario(pessoa1) > salario(pessoa2))
    cout << "O salario da pessoa1 e maior";
    else if (salario(pessoa1) < salario(pessoa2))
    cout << "O salario da pessoa2 e maior";
    else
    cout << "O salario e igual";
}

/******************************************************************************
Exercício 5 - Crie um programa em C++ que recebe a pontuação de um usuário e a de outro usuário
e verifica quem ganhou o jogo, com base na maior pontuação.
*******************************************************************************/

#include <iostream>

using namespace std;

int soma_pontos(int pontos[], int numjogos){
    int resultado = 0;
    int controle = 0;
    while(controle < numjogos){
    resultado = resultado + pontos[controle];
    controle = controle + 1;
}   
    return resultado;
}
int main()
{
    int res_particip1[3] = {3,0,2};
    int res_particip2[3] = {0,3,1};
    if (soma_pontos(res_particip1,3) > soma_pontos(res_particip2,3))
    cout << "Participante 1 ganhou";
    else if (soma_pontos(res_particip1,3) < soma_pontos(res_particip2,3))
    cout << "Participante 2 ganhou";
    else
    cout << "Empate";
}

/******************************************************************************
Exercício 6 - Crie um vetor de elementos do tipo inteiro e imprima o primeiro e o último elemento
desse vetor.
*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int vetor[5] = {2,14,15,23,36};
    cout << "O primeiro elemento do vetor e " << vetor[0] << endl;
    cout << "O ultimo elemento do vetor e  " << vetor[4] << endl;
}

