#include "MinhaListaEncadeada.h"

template <class T>
void MinhaListaEncadeada<T>::imprime()
{
	cout<<"Dados da Lista:\n";
	Elemento<T> *temp = this->cabeca;
	int c = 0;
	do
		cout <<"\tElemento "<< ++c <<":"<<temp->valor << endl;
	while (temp = temp->prox);
}


template <class T>
void MinhaListaEncadeada<T>::inverte()
{
	Elemento<T> * temp = this->cabeca;
	Elemento<T> * anterior = temp;
	Elemento<T> * posterior = temp->prox;
	temp->prox = NULL;
	cout<<"--invertendo lista--"<<endl;
	do{
		temp = posterior;
		posterior = temp->prox;
		temp->prox = anterior;
		anterior = temp;
	}while(posterior);
	this->cabeca = anterior;
}