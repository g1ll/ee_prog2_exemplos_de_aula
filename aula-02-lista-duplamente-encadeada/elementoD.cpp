#include "elementoD.h"
template<typename T>
ElementoD<T>::ElementoD(T v) {
  valor = v;	// Ajusta o valor do elemento
  prox = ant = NULL; // Limpa os ponteiros
}
