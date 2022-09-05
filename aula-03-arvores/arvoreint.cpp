#include <cstdlib>
#include <iostream>
#include "ArvoreBinariadeBusca.cpp"

using namespace std;

int main()
{

	ArvoreBinariadeBusca<int> btree;

	btree.inserir(4);
	btree.inserir(2);
	btree.inserir(6);
	btree.inserir(1);
	btree.inserir(3);
	btree.inserir(5);
	btree.inserir(7);

	cout << "Imprime em ordem: " << endl;
	btree.imprimeInOrden(nullptr);

	int n;
	cout << "Buscar um numero: ";
	cin >> n;

	No<int> *no = btree.busca(n,NULL);
	if (no)
		cout << "Busca: " << n
			 << "\n\tesq: " << (no->esq ? no->esq->valor : -1)
			 << "\n\tdir: " << (no->dir ? no->dir->valor : -1) << endl;
	else
		cout << "Nao encontrado: " << n << endl;
	
	cout << "Remover: "<< n << endl;
	btree.remover(n);
	
	cout << "Imprime em ordem: " << endl;
	btree.imprimeInOrden(nullptr);

}