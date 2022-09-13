#ifndef PILHA_H_
#define PILHA_H_
#include <cstdlib>
#include <iostream>
#include "../base/elemento.h"
#include "../base/elemento.cpp"

using namespace std;

template<typename T>
class Pilha{
private:
  int tam; // Tamanho da lista
  Elemento<T> *topo;
public:
	Pilha();
	void empilha(T x);
	T desempilha();
	void ver();
};

#endif