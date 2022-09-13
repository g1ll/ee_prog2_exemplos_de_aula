#ifndef FILA_H_
#define FILA_H_
#include <cstdlib>
#include <iostream>
#include "../base/elemento.cpp"

using namespace std;

template<typename T>
class Fila{
protected:
  int tam; // Tamanho da lista
  Elemento<T> *primeiro;
public:
	Fila();
	void inserir(T x);
	T obter();
	void ver();
};

#endif