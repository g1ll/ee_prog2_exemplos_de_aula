#include "ArvoreBinariadeBusca.h"

template<typename T>
ArvoreBinariadeBusca<T>::ArvoreBinariadeBusca(){
	raiz = NULL;
}

template<typename T>
void ArvoreBinariadeBusca<T>::inserir(T x){
	No<T> *novo = new No<T>(x);
	if(!raiz)
		raiz = novo;
	else{
		No<T> *atual = raiz;
		while(atual){
			cout << "passou: "<< atual->valor << endl;
			if(novo->valor<atual->valor){
				if(atual->esq)
					atual = atual->esq;
				else {
					atual->esq = novo;
					atual = nullptr;
				}
			}else if (novo->valor>atual->valor){
				if(atual->dir)
					atual = atual->dir;
				else{
					atual->dir = novo;
					atual = nullptr;
				}
			}else{
				cout <<"ja existe: "<<novo->valor;
				atual = nullptr;
			}
		}
		cout << "inseriu: "<<novo->valor<<endl;
	}
}

template<typename T>
void ArvoreBinariadeBusca<T>::imprimeInOrden(No<T> *no){
	if(!no)	no = raiz;
	
	if(!raiz) 
		cout << "Arvore vazia!";
	else{
		if(no->esq) 
			imprimeInOrden(no->esq);
		
		cout << " " << no->valor;
		
		if(no->dir) 
			imprimeInOrden(no->dir);
		
		if(no == raiz) cout << endl;
	}
}

template<typename T>
void ArvoreBinariadeBusca<T>::imprimePreOrden(No<T> *no){
	//Implementar
}

template<typename T>
void ArvoreBinariadeBusca<T>::imprimePosOrden(No<T> *no){
	//Implementar
}

template<typename T>
No<T>* ArvoreBinariadeBusca<T>::busca(T x, No<T> *no){
	if(!no)	no = raiz;
	if(!raiz) return NULL;
	else{
		if(x==no->valor) return no;
		else if(x<no->valor) return no->esq?busca(x, no->esq):NULL;
		else if(x>no->valor) return no->dir?busca(x, no->dir):NULL;
		else return NULL;
	}
}

template<typename T>
void ArvoreBinariadeBusca<T>::remover(T x){
	removerBusca(x,raiz);
}

template<typename T>
void ArvoreBinariadeBusca<T>::removerBusca(T x, No<T> *&atual){
	if(x<atual->valor)
		removerBusca(x,atual->esq);
	else if (x>atual->valor)
		removerBusca(x,atual->dir);
	else deletarNo(atual);
}

template<typename T>
void ArvoreBinariadeBusca<T>::deletarNo(No<T> *&atual){
	No<T> * temp = atual;
	if(!atual->esq){
		atual = atual->dir;
		delete temp;
	}else if(!atual->dir){
		atual = atual->esq;
		delete temp;
	}else{
		No<T> * sucessor = obterSucessor(atual);
		atual->valor = sucessor->valor;
		removerBusca(sucessor->valor,atual->dir);
	}
}

template<typename T>
No<T>* ArvoreBinariadeBusca<T>::obterSucessor(No<T> *temp){
	temp = temp->dir;
	while(temp->esq)
		temp = temp->esq;
	return temp;
}