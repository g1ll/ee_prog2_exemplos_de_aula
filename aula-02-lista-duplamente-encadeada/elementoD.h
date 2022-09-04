/*
 * elementoD.h
 *
 *  Created on: 29 de ago de 2017
 *      Author: André
 */

#ifndef ELEMENTOD_H_
#define ELEMENTOD_H_
#include <stddef.h>
using namespace std;

template<typename T>
class ElementoD {
public:
  T valor; // Pode ser implementa qualquer tipo de dados aqui.
  ElementoD<T> *prox,*ant; //Ponteiro para os elementos vizinhos
  ElementoD<T>(T);// Construtor recebe obrigatoriamente um valor do tipo T
};

#endif