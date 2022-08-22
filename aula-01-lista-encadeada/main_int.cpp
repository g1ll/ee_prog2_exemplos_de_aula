#include "ListaEncadeada.cpp"

using namespace std;

int main()
{
	int nsearch = 3;
	int value;
	cout << "Teste Lista Encadeada (INT):\n";
	ListaEncadeada<int> list;
	list.insereF(10);
	list.insereF(20);
	list.insereF(50);
	list.insere(30, 2);
	list.insere(40, 3);
	list.imprime();
	value = list.pos(nsearch);
	cout << "\nElemento na posicao "<< nsearch;
	if((int) value > 0 ) 
		cout << ": " << value << "\n";
	else cout << " não encontrado!\n";
	return 0;
}
