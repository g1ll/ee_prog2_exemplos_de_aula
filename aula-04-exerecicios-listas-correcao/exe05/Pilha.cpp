#include "Pilha.h"

template <typename T>
Pilha<T>::Pilha()
{
  topo = NULL; // Pilha vazia
  tam = 0;
}

template <typename T>
void Pilha<T>::empilha(T x)
{
  Elemento<T> *novo = new Elemento<T>(x); // Aloca espaco de memoria
  tam++;
  if (!topo){
    topo = novo;
  }else{
    Elemento<T> *temp = topo;
    novo->prox = temp;
    topo = novo;
  }
}

template <typename T>
T Pilha<T>::desempilha()
{
  --tam;
  Elemento<T> *lixo = topo;
  topo = topo->prox;
  T valor = lixo->valor;
  delete lixo;
  return valor;
}

template <typename T>
void Pilha<T>::ver()
{
  if (tam > 0)
  {
    Elemento<T> *temp = topo;
    for (int i = 1; i <= tam; i++, temp = temp->prox){
      cout << temp->valor<< endl;
    }
  }else{
    cout << "\nPilha vazia!" << endl;
  }
}