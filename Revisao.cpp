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
    int res_atl[3] = {3,1,3};
    int res_cru[3] = {1,3,3};
    if (soma_pontos(res_atl,3) > soma_pontos(res_cru,3))
    cout << "Atletico campeao";
    else if (soma_pontos(res_atl,3) < soma_pontos(res_cru,3))
    cout << "Cruzeiro campeao";
    else
    cout << "Empate";
}
