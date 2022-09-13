#ifndef ELEMENTO_H_
#define ELEMENTO_H_
#include <stddef.h>
using namespace std;

template<typename T>
class Elemento {
public:
  int * n;
  T valor; // Pode ser implementado qualquer tipo de dados aqui.
  Elemento<T> * prox; //Ponteiro para próximo elemento
  Elemento<T>(T);// Construtor recebe obrigatoriamente um valor do tipo T
  T getValor();
};
#endif // ELEMENTO_H_
