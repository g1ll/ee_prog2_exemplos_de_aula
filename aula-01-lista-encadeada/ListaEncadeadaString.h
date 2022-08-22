#ifndef LISTAENCADEADASTRING_H_
#define LISTAENCADEADASTRING_H_
#include <cstdlib>
#include <iostream>
#include "ListaEncadeada.h"
#include "ListaEncadeada.cpp"
using namespace std;

class ListaEncadeadaString : public ListaEncadeada<string> { //Definição da Classe
public:
  ListaEncadeadaString();
  string pos(int pos); // Retorna o elemento na posicao pos ou -1
};
#endif // LISTAENCADEADASTRING_H_
