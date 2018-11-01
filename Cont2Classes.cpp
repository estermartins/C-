#include "Ordenacao.h"

int main (int argc, char **argv) 
{
	cap1::Ordenacao::executa ();
}

#ifndef ORDENACAO_H_
#define ORDENACAO_H_
#include<iostream>
using std::cout;
using std::endl;
namespace cap1 {
	class Ordenacao {	
    	public:
    	  static void ordena (int *v, int n);
    	  static void executa ();
    };	
    	
	void Ordenacao::ordena (int *v, int n) {
      for (int i = 0; i < n - 1; i++) {
        int min = i;
        for (int j = i + 1; j < n; j++)
          if (v[j] < v[min]) 
            min = j;
            /* Troca v[min] e v[i] */
            int x = v[min]; 
            v[min] = v[i]; 
            v[i] = x;
      }
	}
	
	void Ordenacao::executa () {
      int *v = new int[10];
      v[0] = 5;  v[1] = 12;
      v[2] = 4;  v[3] = 1;
      v[4] = 9; v[5] = 22;
      v[6] = 3; v[7] = 11;
      v[8] = 17; v[9] = 33;
      Ordenacao::ordena (v, 10);
      for (int i = 0; i < 10; i++)
        cout << "v[" << i << "]: " << v[i] << endl;
      delete []v;
	}
}
#endif
