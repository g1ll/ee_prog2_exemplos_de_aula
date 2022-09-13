#include "MinhaListaEncadeada.h"

using namespace std;

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
