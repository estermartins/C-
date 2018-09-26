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
 Faca o calculo do desconto em folha, devido ao INSS, segundo a tabela abaixo:
 
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
    string CPF;  
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
    
    if(nacionalidade =="brasileiro" ) {
      cout <<"O funcionario: " << nome << " e brasileiro!" << endl;
      system("pause");
 }
    double desconto_salario1 =  (salario-(salario * 0.08));
  if(salario <= 1693.72){
      cout << nome << endl;
      cout << CPF << endl;
      cout << nacionalidade << endl;
      cout << identidade << endl;
      cout << pais << endl;
      cout << estado << endl;
      cout << cidade << endl;
      cout << rua << endl;
      cout << numero << endl;
      cout << salario << endl;
}
     double desconto_salario2 =  (salario-(salario * 0.09));
  if(salario > 1693.72 && salario <= 2822.90){
      cout << "O valor descontado do salario para o INSS: foi de 9 porcento. "<< endl;
      cout << "Valor liquido do salario: " << (desconto_salario2) << endl;
  }
     double desconto_salario3 =  (salario-(salario * 0.11));
   if(salario > 2822.91){
      cout << "O valor descontado desse salario para o INSS: foi de 11 porcento. "<< endl;
      cout << "Valor liquido do salario: " << (desconto_salario3) << endl;
  }
}
     double cargo1;
   if (salario < 1500){
       cout << "O cargo do funcionario e de Estagiario. " << endl;
   }
     double cargo2;
   if (1501 < salario < 2000){
       cout << "O cargo do funcionario e de Dev Junior. " << endl;
   }
   double cargo3;
   if (2001 < salario < 4000){
       cout << "O cargo do funcionario e de Dev Pleno. " << endl;
   }
   double cargo4;
   if (4001 < salario < 7000){
       cout << "O cargo do funcionario e de Dev Senior. " << endl;
   }
   double cargo5;
   if (7001 < salario < 10000){
       cout << "O cargo do funcionario e de Gerente de Projetos. " << endl;
   }
   double cargo6;
   if (10001 < salario < 15000){
       cout << "O cargo do funcionario e de Gerente de Projetos Senior. " << endl;
   }
   double cargo7;
   if (15001 < salario < 30000){
       cout << "O cargo do funcionario e de Diretor de TI. " << endl;
   }
   double cargo8;
   if (30001 < salario < 50000){
       cout << "O cargo do funcionario e de Diretor de TI Senior. " << endl;
   }
   double cargo9;
   if (50001 < salario < 100000){
       cout << "O cargo do funcionario e de Presidente. " << endl;
   }
}
