#include <iostream>
using namespace std;

class ContaBancaria {
  private: 
    double saldo;
    string Cliente;
  public:
    ContaBancaria (string nomeCliente, double saldoInicial);
    void deposito (double valor);
    void saque (double valor);
    void imprime () const;
    ~ContaBancaria () {}
 };
  
  ContaBancaria::ContaBancaria (string nomeCliente, double saldoInicial) {
    saldo = saldoInicial;
    Cliente = nomeCliente;
  }
  void ContaBancaria::deposito (double valor) {
    saldo = saldo + valor;
  }
  void ContaBancaria::saque (double valor) {
    saldo = saldo - valor;
  }
  void ContaBancaria::imprime () const {
    cout << "saldo=" << saldo << endl;
    cout << "nome=" << Cliente << endl;
  }
    
 int main () {
    ContaBancaria conta1("Teste", 200.00);
    cout << "Antes da movimentacao, ";
    conta1.imprime ();
    conta1.deposito (50.00);
    conta1.saque (70.00);
    cout << "Depois da movimentacao, ";
    conta1.imprime ();
 }
