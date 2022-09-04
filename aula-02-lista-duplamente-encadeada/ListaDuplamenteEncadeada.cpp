/*
 * ListaDuplamenteEncadeada.cpp
 *
 *  Created on: 19 de ago de 2017
 *      Author: André
 */

#include "ListaDuplamenteEncadeada.h"

template<typename T>
ListaDuplamenteEncadeada<T>::ListaDuplamenteEncadeada() {
  cabeca = posicao = NULL; // Cabeça e pos vazia
  tam = 0; // Tamanho inicial zero
}

template<typename T>
void ListaDuplamenteEncadeada<T>::insereI(T x) { // Método para adicionar um elemento novo no inicio da lista.
  ElementoD<T> *novo = new ElementoD<T>(x); // Aloca espaço de memória
  tam++;
  if (cabeca == NULL) // Lista vazia
    insereInicial(novo);
  else {
    novo->prox = cabeca;
    cabeca->ant = novo; // Adição em relação a lista encadeada
    cabeca = novo;
  }
}

template<typename T>
void ListaDuplamenteEncadeada<T>::insere(T x, int pos) {
}

template<typename T>
void ListaDuplamenteEncadeada<T>::insereF(T x) {
  ElementoD<T> *novo = new ElementoD<T>(x); // Aloca espaço de memória
  tam++;
  if (!cabeca) // Lista vazia
    insereInicial(novo);
  else { // Lista já tem elementos
    ElementoD<T> *onde = cabeca;
    while (onde->prox) // Enquanto não for o último elemento
      onde = onde->prox;
    onde->prox = novo;
    novo->ant = onde;  // Adição em relação a lista encadeada
  }
}

template<typename T>
void ListaDuplamenteEncadeada<T>::imprime() {
  ElementoD<T>* temp = cabeca;
  do
    cout << temp->valor << endl;
  while ((temp = temp->prox) && (temp)); // É uma atribuição e uma comparação
}

template<typename T>
bool ListaDuplamenteEncadeada<T>::localiza(T val) {
  for (ElementoD<T> *onde = cabeca; onde; onde = onde->prox)
    if (onde->valor == val)
      return true;
  return false;
}

template<typename T>
bool ListaDuplamenteEncadeada<T>::delU() {
}

template<typename T>
bool ListaDuplamenteEncadeada<T>::delP() {
}

template<typename T>
bool ListaDuplamenteEncadeada<T>::delV(T y) {
}

template<typename T>
T ListaDuplamenteEncadeada<T>::pos(int pos) {
  if ((pos < tam) && (pos >= 0)) { //Verifica se a pos é valida
    ElementoD<T> *onde = cabeca; // Ponteiro auxiliar
    for (int i = 0; i < pos; i++) // Avança até a posição que se queira
      onde = onde->prox; // Avança 1 posição
    return onde->valor; //Retorna o valor
  }
}

template<typename T>
bool ListaDuplamenteEncadeada<T>::insereInicial(ElementoD<T> *x) {
  cabeca = posicao = x;
}

template<typename T>
void ListaDuplamenteEncadeada<T>::primeiro() {
  posicao = cabeca;
}

template<typename T>
void ListaDuplamenteEncadeada<T>::anterior() {
  if (posicao != cabeca)
    posicao = posicao->ant;
}

template<typename T>
void ListaDuplamenteEncadeada<T>::proximo() {
  if (posicao->prox)
    posicao = posicao->prox;
}

template<typename T>
void ListaDuplamenteEncadeada<T>::ultimo() {
  while (posicao->prox)
    posicao = posicao->prox;
}

template<typename T>
T ListaDuplamenteEncadeada<T>::retornaAtual() {
  return posicao->valor;
}

template<typename T>
void ListaDuplamenteEncadeada<T>::excluirUltimo() {
  if (tam == 0)
    cabeca = posicao = NULL;
}
