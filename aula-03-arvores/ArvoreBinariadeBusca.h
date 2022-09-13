#ifndef ARVOREBINARIADEBUSCA_H_
#define ARVOREBINARIADEBUSCA_H_

#include <stddef.h>
#include "No.cpp"

using namespace std;

template <typename T>
class ArvoreBinariadeBusca
{
private:
	No<T> *raiz;
	
	void deletarNo(No<T> *&atual, bool ant); //implementar antecessor
	No<T>* obterAntecessor(No<T> *atual); //implementar
	
	void removerBusca(T x, No<T> *&atual);
	void deletarNo(No<T> *&atual);
	No<T>* obterSucessor(No<T> *atual);

public:
	ArvoreBinariadeBusca();
	void inserir(T x);
	void remover(T x);
	void imprimeInOrden(No<T> *no);
	void imprimePreOrden(No<T> *no); //Implementar
	void imprimePosOrden(No<T> *no); //Implementar
	void imprimeNivel(No<T> *no); //Implementar
	void imprime(No<T> *no); //Imprimir arvore no formato identacao
	No<T>* busca(T x,No<T>*);
};

#endif