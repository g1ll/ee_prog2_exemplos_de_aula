#include "elemento.h"
// Construtor, Caso um valor não seja atributido será utilizado zero
template<typename T>
Elemento<T>::Elemento(T v) {
  valor = v;
  prox = NULL;
}

template<typename T>
T Elemento<T>::getValor(){
  return valor;
}

