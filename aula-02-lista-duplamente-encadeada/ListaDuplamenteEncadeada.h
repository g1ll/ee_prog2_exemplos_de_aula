/*
 * ListaDuplamenteEncadeada.h
 *
 *  Created on: 29 de ago de 2017
 *      Author: André
 */

#ifndef LISTADUPLAMENTEENCADEADA_H_
#define LISTADUPLAMENTEENCADEADA_H_

#include <cstdlib>
#include <iostream>
#include "elementoD.h"
#include "elementoD.cpp"

using namespace std;

template<typename T>
class ListaDuplamenteEncadeada { //Definição da Classe
protected:
  int tam; // Tamanho da lista
  ElementoD<T> *cabeca; // A "cabeça" é um ponteiro para o primeiro elemento da lista.
  ElementoD<T> *posicao; // Guarda a posição atual

public:
  ListaDuplamenteEncadeada(); // Construtor padrão
  void insereI(T x); // Método para adicionar um elemento novo no início.
  void insere(T x, int pos); // Método para inserir em uma posição qualquer
  void insereF(T x); // Método para adicionar um elemento novo ao final da lista.
  void imprime();  // Método para imprimir, na saída padrão, todos os elementos na tela;
  bool localiza(T val);  // Método de busca de um elemento na lista
  bool delU(); // Apaga o último elemento de uma lista
  bool delP(); // Apaga o primeiro elemento de uma lista
  bool delV(T y); // Apaga o elemento de valor y
  T pos(int pos); // Retorna a posição do elemento p;
  void primeiro();
  void anterior();
  void proximo();
  void ultimo();
  T retornaAtual();

private:
  bool insereInicial(ElementoD<T> *x); // Insere o primeiro elemento na lista
  void excluirUltimo(); //Exclui o último elemento da lista ajustando os ponteiros da lista
};


#endif /* LISTADUPLAMENTEENCADEADA_H_ */
