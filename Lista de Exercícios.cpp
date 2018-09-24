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

/******************************************************************************
Exercício 7 - Crie um vetor de elementos do tipo float, insira valores nesses elementos e faça um
loop para imprimir cada um desses elementos.
*******************************************************************************/
#include <iostream> 
using namespace std; 

float valores(float a, float b)
{
    return a && b; 
} 
int main() 
{ 
  float a; 
  float b; 
  a = 41.3; 
  b = 74.4; 
  cout <<"Conteudo de a: "<< a << "\n"; 
  cout <<"Conteudo de b: "<< b << "\n"; 
}

/******************************************************************************
Exercício 8 - Três times de futebol participaram de 6 partidas. Crie vetores para simular os resultados 
desses jogos e imprima a pontuação obtida por cada time. 
*******************************************************************************/
#include <iostream>
using namespace std;

int main()
{
int cruzeiro[6] = {3,3,1,3,0,3};
    int corinthias[6] = {1,0,1,3,0,3};
    int gremio[6] = {0,3,1,3,1,1};
    int res_cru, res_cor, res_gre;
    res_cru = 0; res_cor = 0; res_gre = 0;
    int num_partidas = 6;
    int contador = 0;
    while(contador < num_partidas){
        res_cru = res_cru + cruzeiro[contador];
        res_cor = res_cor + corinthias[contador];
        res_gre = res_gre + gremio[contador];
        contador ++;
    }
    cout << "Resultado do cruzeiro e " << res_cru << endl;
    cout << "Resultado do corinthias e " << res_cor << endl;
    cout << "Resultado do gremio e " << res_gre << endl;
}

/******************************************************************************
Exercício 9 - Cria um programa em C++ que possui uma variável inteira que se inicia com o valor 0. 
Faça com que ela acumule o valor 2 nela mesma ao longo de 20 iterações. 
*******************************************************************************/
#include <iostream>
using namespace std;

int main()
{
int var = 0;
int controle = 0;
int num_interacaoes = 20;
for(controle=0; controle<num_interacaoes;controle++){
    var = var + 2;
}
cout << var;
}

/******************************************************************************
Exercício 10 - Pensando na mesma lógica do programa anterior, crie uma alteração no Exercício referente 
aos times, para que seja feita a soma das pontuações de cada um. 
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
    int soma_cruzeiro[6] = {3,3,1,3,0,3};
    int soma_corinthias[6] = {1,0,1,3,0,3};
    int soma_gremio[6] = {0,3,1,3,1,1};
    cout << "A soma de pontos do cruzeiro e " << (soma_pontos(soma_cruzeiro,6)) << endl;
    cout << "A soma de pontos do corinthias e " << (soma_pontos(soma_corinthias,6)) << endl;
    cout << "A soma de pontos do gremio e " << (soma_pontos(soma_gremio,6)) << endl;
}

/******************************************************************************
Exercício 11 - Crie um programa que faz a leitura da nota final de um aluno e verifica se ele  
foi aprovado, reprovado ou se está de exame especial em uma disciplina. Os critérios que devem 
ser considerados são: Nota acima de 70 indica aprovação, nota abaixo de 40 indica reprovação e 
nota entre 40 e 59 indica exame especial.  
*******************************************************************************/
#include <iostream>
using namespace std;

int main()
{
    int nota_aluno = 54;
    if (nota_aluno > 60)
    cout << "Aluno foi aprovado";
    else if (nota_aluno < 40)
    cout << "Aluno foi reprovado";
    else
    cout << "Aluno fara o exame especial";
}  

/******************************************************************************
Exercício 12 - Faça uma alteração no seu programa anterior, para que ele utilize as notas individuais 
do aluno em cada atividade da disciplina, e calcule o resultado final, para que posteriormente possa 
ser verificada a aprovação do aluno.   
*******************************************************************************/
#include <iostream>
using namespace std;
#include <iostream>
using namespace std;
int soma_notas(int notas[], int num_atividades){
    int resultado = 0;
    int controle = 0;
    while(controle < num_atividades){
    resultado = resultado + notas[controle];
    controle = controle + 1;
}   
    return resultado;
}
int main()
{
    int res_aluno[5] = {20,11,5,16,13};
    int aprovacao = 60;
    int reprovacao = 40;
    if (soma_notas(res_aluno,5) > aprovacao)
    cout << "Aluno aprovado";
    else if (soma_notas(res_aluno,5) < reprovacao)
    cout << "Aluno reprovado";
    else
    cout << "Aluno fara o exame especial";
}

/******************************************************************************
Exercício 13 - Um desenvolvedor recebe 50 reais por hora trabalhada. Considerando que ele trabalhada 
8 horas por dia, crie uma função que calcula quanto esse desenvolvedor recebeu no mês atual, considerando 
que ele trabalhou 22 dias nesse mês. 
*******************************************************************************/
#include <iostream>
using namespace std;

int salario(int valor_hora, int horas_dia, int dias_mes)
{
    return valor_hora * horas_dia * dias_mes;
}
int main()
{
    string nome = "";
    int valor = 0;
    int horas = 0;
    int dias = 0;
    cout << "Digite o nome de um desenvolvedor ou -1 para sair:\n";
    cin  >> nome;
    while (nome != "-1") {
        cout << "Quanto " << nome << " ganha por hora?\n";
        cin  >> valor;
        cout << "Quantas horas " << nome << " trabalha por dia?\n";
        cin  >> horas;
        cout << "Quantos dias " << nome << " trabalha por mes?\n";
        cin  >> dias;
        cout << "Salario de " << nome << ": ";
        cout << salario(valor, horas, dias) << endl;
        cout << "Digite o nome de um desenvolvedor ou -1 para sair:\n";
        cin  >> nome;
    }
    return 0;
}

/******************************************************************************
Exercício 14 - Uma empresa de aviação possui um tipo de avião que comporta 10 pessoas. Crie um programa 
que possui uma função, cujos parâmetros de entrada são: o número de aviões disponíveis e o número de 
passageiros para serem transportados. Essa função deverá calcular se os aviões conseguem comportar essas 
pessoas, e caso não consiga, quantas ficarão para as próximas viagens. Faça uma simulação na qual os 
aviões comportam o número de pessoas e outra na qual ele não comporta. 
*******************************************************************************/
#include <iostream>
using namespace std;

string calcula_avioes(int num_pessoas, int num_avioes){
    int num_lugares = 10* num_avioes; 
    if (num_lugares>=num_pessoas){
        return "Todos couberam";
    }
    else { cout << "Faltaram" << num_pessoas - num_lugares;}
    return "Não coube";
}
int main(){
    int num_pessoas = 100;
    int num_avioes = 10;
    cout << calcula_avioes(num_pessoas, num_avioes);
}

/******************************************************************************
Exercício 15 - Um hospital consegue atender 20 pessoas por hora. Considerando que no momento em que 
o hospital foi aberto chegaram 100 pessoas, faça um programa para calcular quanto tempo o paciente com 
a senha 68 irá demorar para ser atendido.  
*******************************************************************************/
#include <iostream>
using namespace std;

int main(){
    int num_atendimentos = 20;
    int pos_fila = 68;
    int num_horas_espera;
    num_horas_espera = pos_fila/num_atendimentos;
    cout << num_horas_espera;
}

/******************************************************************************
Exercício 16 - Faça um programa em C++ que percorre um conjunto de números e informa qual deles é o 
maior.   
*******************************************************************************/
#include <iostream>
using namespace std;

int main()
{
    int vetor[] = {45,21,78,4,95,66};
    int max = vetor[0];
    int contador = 1;
    int tam_vetor = 6;
    int posicao = 0;
    while (contador < tam_vetor){
        if (vetor [contador] > max){
            max = vetor[contador];
            posicao = contador;
        }
        contador ++;
    }
    cout << max;
}

/******************************************************************************
Exercício 17 - Faça um programa em C++ que executa a mesma operação do primeiro, porém informa a 
posição do maior número, e não o seu valor.   
*******************************************************************************/
#include <iostream>
using namespace std;

int main()
{
    int vetor[] = {45,21,78,4,95,66};
    int max = vetor[0];
    int contador = 1;
    int tam_vetor = 6;
    int posicao = 0;
    while (contador < tam_vetor){
        if (vetor [contador] > max){
            max = vetor[contador];
            posicao = contador;
        }
        contador ++;
    }
    cout << posicao;
}

/******************************************************************************
Exercício 18 - Faça um ajuste no programa 16, para que ele também informe o menor valor da lista.  
*******************************************************************************/
#include <iostream>
using namespace std;

int main()
{
    int vetor[] = {45,21,78,4,95,66};
    int min = vetor[0];
    int contador = 1;
    int tam_vetor = 6;
    int posicao = 0;
    while (contador < tam_vetor){
        if (vetor [contador] < min){
            min = vetor[contador];
            posicao = contador;
        }
        contador ++;
    }
    cout << min;
}

/******************************************************************************
Exercício 19 - A equipe de uma contrutora consegue entregar 100 metros quadrados construídos por dia. 
Com base nisso, faça um programa que possui uma função para efetuar o cálculo do tempo necessário 
para construir um projeto com 2326 metros quadrados. Esse tempo deve ser fornecido em dias.  
*******************************************************************************/
#include <iostream>
using namespace std;

int tempo_const(int metros_dia, int metros_const_total)
{
    return metros_const_total/metros_dia;
}
int main()
{
    int metros_dia = 100;
    int metros_const_total = 2326;
    
    cout << "O tempo total de construcao e de " << metros_const_total/metros_dia << " dias";
}

/******************************************************************************
Exercício 20 - Gere um conjunto de 10 números inteiros de forma aleatória, e verifique qual é o maior 
valor gerado. 
*******************************************************************************/
RAND 
#include <iostream>
using namespace std;

int main(){
    int tam_vetor = 10; int vetor[10]; int controle = 0;
    while (controle < tam_vetor){
        vetor[controle] = rand() %10 + 1;
        controle ++;
    }
    int max = vetor[0];
    int contador = 1;
    int posicao = 0;
    while (contador < tam_vetor){
        if (vetor[contador] > max){
            max = vetor[contador];
            posicao = contador;
        }
        contador ++;
    }
    cout << max;
}
