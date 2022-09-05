#ifndef NO_H_
#define NO_H_
#include<stddef.h>

using namespace std;

template<typename T>
class No{
	public:
	T valor;			//A informaçao pode ser de qualquer tipo
	No<T> *esq, *dir;	//Ponteiros para nós da esquerda e direita
	No<T>(T x);
};
#endif