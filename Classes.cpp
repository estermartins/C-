#include <iostream>
using namespace std;

class CanetaNova{
    private:
        string cor;
        string marca;
        int volume;
        
  
    public:
        CanetaNova( string corCanetaNova, string marcaCanetaNova, int volumeCanetaNova );
        void imprimeDadosCanetaNova();
        void setMarcaCanetaNova(string marca);
        void setCorCanetaNova(string cor);
};

CanetaNova::CanetaNova( string c, string m, int v ){  // Construtor d classe
    cor = c;
    marca = m;
    volume = v;
}

void CanetaNova::imprimeDadosCanetaNova(){
    cout << "Cor da CanetaNova: " << cor << endl;
    cout << "Marca da CanetaNova: " << marca << endl;
    cout << "Volume da CanetaNova: " << volume << endl;
}

void CanetaNova::setCorCanetaNova(string cor){
    this->cor = cor;
}

int main(){
    CanetaNova caneta1("Verde", "Bic", 10);
    CanetaNova caneta2("Azul", "FaberCastell", 10);
    CanetaNova caneta3("Vermelha", "Batata", 8);
    // Crie uma nova caneta e imprima ela.
    // Adicione na classe um atributo marca, e modifique o método de
    // impressão para que ele também imprima a marca.
    caneta1.imprimeDadosCanetaNova();
    cout << endl;
    caneta2.imprimeDadosCanetaNova();
    cout << endl;
    caneta3.imprimeDadosCanetaNova();
    
    caneta3.setCorCanetaNova("Roxa");
    cout << endl;
    cout << "Novo Valor:" << endl;
    caneta3.imprimeDadosCanetaNova();
    
}
