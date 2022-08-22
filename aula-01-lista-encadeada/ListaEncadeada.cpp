#include "ListaEncadeada.h"
template<typename T>
ListaEncadeada<T>::ListaEncadeada() {
  cabeca = NULL; // Lista vazia
  tam = 0;
}

template<typename T>
void ListaEncadeada<T>::insereF(T x){//Adiciona um elemento ao final da lista
  Elemento<T> *novo = new Elemento<T>(x); // Aloca espaço de memoria
  tam++;
  if (!cabeca) // Lista vazia
    cabeca = novo;
  else { // Lista ja tem elementos
    Elemento<T> *onde = cabeca;
    while (onde->prox) // Enquanto nao for o ultimo elemento
      onde = onde->prox;
    onde->prox = novo;
  }
}

template<typename T>
void ListaEncadeada<T>::insereI(T x) { // Metodo para adicionar um elemento novo ao final da lista.
  Elemento<T> *novo = new Elemento<T>(x); // Aloca espaco de memoria
  tam++;
  novo->prox = cabeca;
  cabeca = novo;
}

template<typename T>
void ListaEncadeada<T>::insere(T x, int pos) {
  if (pos == 0)
    insereI(x);
  else if (pos == tam)
    insereF(x);
  else if ((pos < tam) && (pos > 0)) {
    Elemento<T> *novo = new Elemento<T>(x); // Aloca espaco de memoria
    tam++;
    Elemento<T> *onde = cabeca;
    for (int i = 0; i < (pos - 1); ++i) // Avanca ate a posicao de insercao
      onde = onde->prox;
    novo->prox = onde->prox;
    onde->prox = novo;
  }
}

template<class T>
void ListaEncadeada<T>::imprime() { // Metodo para imprimir, na saida padrao, todos os elementos na tela;
  Elemento<T>* temp = cabeca;
  do
    cout << temp->valor << endl;
  while(temp = temp->prox); // E uma atribuicao e uma comparacao
}

template<typename T>
bool ListaEncadeada<T>::localiza(T val) { // Metodo de busca de um elemento na lista
  for (Elemento<T> *onde = cabeca; onde; onde = onde->prox)
    if (onde->valor == val)
      return true;
  return false;
}

template<typename T>
bool ListaEncadeada<T>::delU() {
  if (tam > 0) {
    tam--;
    Elemento<T> *onde = cabeca;
    while (onde->prox->prox) // Enquanto nao for o penultimo elemento
      onde = onde->prox;
    delete onde->prox; // libera a area de memoria do ponteiro
    onde->prox = NULL; // define o penultimo elemento como prox NULL.
    return true;
  }
  return false;
}

template<typename T>
bool ListaEncadeada<T>::delP() {
  if (tam > 0) {
    tam--;
    Elemento<T> *lixo = cabeca;
    cabeca = cabeca->prox;
    delete lixo; // libera a area de memeria do ponteiro
    return true;
  }
  return false;
}

template<typename T>
bool ListaEncadeada<T>::delV(T y) {
  if ((tam > 0)&&(localiza(y))) {
    Elemento<T> *onde = cabeca;
    if (onde->valor == y)
      return delP();
    tam--;
    while (onde->prox->valor != y) // ve o valor do no seguinte
      onde = onde->prox; // Avanca
    Elemento<T> *lixo = onde->prox;
    onde->prox = onde->prox->prox;
    delete lixo;
    return true;
  }
  return false;
}

template<typename T>
T ListaEncadeada<T>::pos(int pos) {
  if ((pos < tam) && (pos >= 0)) { //Verifica se a posicao valida
    Elemento<T> *onde = cabeca; // Ponteiro auxiliar
    for (int i = 0; i < pos; i++) // Avanca ate a posicao que se queira
      onde = onde->prox; // Avanca 1 posicao
    return onde->valor; //Retorna o valor
  } else
    return -1;
}
