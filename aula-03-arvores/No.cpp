#include "No.h"

template<typename T>
No<T>::No(T x){
	esq = dir = NULL;
	valor = x;
}