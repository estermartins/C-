#include <iostream>
using namespace std;

class Caneta{
    private:
        string cor;
        int volume;
  
    public:
        Caneta( string corCaneta, int volumeCaneta );
        void imprimeDadosCaneta();
        void setCorCaneta(string cor);
};

Caneta::Caneta( string c, int v ){ 
    cor = c;
    volume = v;
}

void Caneta::imprimeDadosCaneta(){
    cout << "Cor da Caneta: " << cor << endl;
    cout << "Volume da Caneta: " << volume << endl;
}

void Caneta::setCorCaneta(string cor){
    this->cor = cor;
}

int main(){
    Caneta caneta1("Verde", 10);
    Caneta caneta2("Azul", 10);
    Caneta caneta3("Vermelha", 8);
    // Crie uma nova caneta e imprima ela.
    // Adicione na classe um atributo marca, e modifique o método de
    // impressão para que ele também imprima a marca.
    caneta1.imprimeDadosCaneta();
    cout << endl;
    caneta2.imprimeDadosCaneta();
    cout << endl;
    caneta3.imprimeDadosCaneta();
    
    caneta3.setCorCaneta("Amarela");
    cout << endl;
    cout << "Novo Valor:" << endl;
    caneta3.imprimeDadosCaneta();
    
}
