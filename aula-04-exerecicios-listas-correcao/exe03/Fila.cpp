#include "Fila.h"

template <typename T>
Fila<T>::Fila()
{
  primeiro = NULL; // Fila vazia
  tam = 0;
}

template <typename T>
void Fila<T>::inserir(T x)
{
  Elemento<T> *novo = new Elemento<T>(x); // Aloca espaco de memoria
  tam++;
  if (!primeiro)
  {
    primeiro = novo;
  }
  else
  {
    Elemento<T> *temp = primeiro;
    while (temp->prox)
      temp = temp->prox;
    temp->prox = novo;
  }
}

template <typename T>
T Fila<T>::obter()
{
  if (tam > 0)
  {
    --tam;
    Elemento<T> *lixo = primeiro;
    primeiro = primeiro->prox;
    T valor = lixo->valor;
    delete lixo;
    return valor;
  }else return -1;
}

template <typename T>
void Fila<T>::ver()
{
  if (tam > 0)
  {
    Elemento<T> *temp = primeiro;
    for (int i = 1; i <= tam; i++, temp = temp->prox)
    {
      cout << temp->valor << endl;
    }
  }
  else
  {
    cout << "\nFila vazia!" << endl;
  }
}