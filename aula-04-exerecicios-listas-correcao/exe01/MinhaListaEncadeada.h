#ifndef MINHALISTAENCADEADA_H_
#define MINHALISTAENCADEADA_H_
#include "../base/ListaEncadeada.h"
#include "../base/ListaEncadeada.cpp"

using namespace std;

template<typename T>

//class NomeClasseFilha : public NomeClasseMaeBase
class MinhaListaEncadeada : public ListaEncadeada<T>{
public:
//assinatura: retorna nomeMetodo(tipo parametros,)
	void imprime();//sobreescrita
};

#endif
