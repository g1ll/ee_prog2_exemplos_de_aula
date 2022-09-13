#ifndef MINHALISTAENCADEADA_H_
#define MINHALISTAENCADEADA_H_
#include "../base/ListaEncadeada.h"
#include "../base/ListaEncadeada.cpp"

using namespace std;

template<typename T>

class MinhaListaEncadeada : public ListaEncadeada<T>{
public:
	void imprime();
	void inverte();
};

#endif
