/*************************************************************************************
Exercício Desafio (2 pontos)
Uma empresa precisa cadastrar alguns dados de seus funcionarios e fazer alguns calculos.
O primeiro requisito e o preenchimento de informacoes do funcionario:
Para isso, emplemente uma coleta de informacoes, para os seguintes dados:
 
 -Nome                     -Estado
 -CPF                      -Cidade
 -Nacionalidade            -Rua
 -Identidade               -Número
 -País                     -Salario
 
Uma vez que as informacoes foram fornecidas, verifique se o funcionario é do Brasil.
Caso seja, imprima um texto com essa informacao para o funcionario do RH.
 Faca o calculo do desconto em folha, devido ao INNS, segundo a tabela abaixo:
 
 ___________________________________________
| Salario (reais)           |    Desconto    |
| até 1693,72               |     8%         |
| de 1693,73 até 2.822,90   |     9%         |
 acima de 2.822,91          |     11%        |
 
 Imprima todos os dados do funcionario.
 Verifique qual será o cargo na carteira de trbalho do funcionario:
      Level 1 - Salário até 1500 - Estagiário
      Level 2 - Salario ate 1501 - 2000 - Dev Junior
      Level 3 - Salario ate 2001 - 4000 - Dev Pleno
      Level 4 - Salario ate 4001 - 7000 - Dev Sênior
      Level 5 - Salario ate 7001 - 10000 - GP
      Level 6 - Salario ate 1001 - 15000 - GP Sênior
      Level 7 - Salario ate 15001 - 30000 - Deretor de TI 
      Level 8 - Salario ate 30001 - 50000 - Diretor de TI Sênio
      Level 9 - Salario ate 50001- 100000 - Presidente 
************************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    string nome;
    int CPF;
    string nacionalidade;
    string identidade;
    string pais;
    string estado;
    string cidade;
    string rua;
    int numero;
    int salario;
    cout << "Como se chama?" << "\n";
    cin >> nome;
    cout << "Qual o seu CPF?" << "\n";
    cin >> CPF;
    cout << "Qual a sua nacionalidade?" << "\n";
    cin >> nacionalidade;
    cout << "Qual a sua identidade?" << "\n";
    cin >> identidade;
    cout << "Vive em qual pais?" << "\n";
    cin >> pais;
    cout << "Em qual estado?" << "\n";
    cin >> estado;
    cout << "Em qual cidade?" << "\n";
    cin >> cidade;
    cout << "Em qual rua?" << "\n";
    cin >> rua;
    cout << "Qual o numero da sua casa?" << "\n";
    cin >> numero;
    cout << "Quanto é o seu salario?" << "\n";
    cin >> salario;
    
}
