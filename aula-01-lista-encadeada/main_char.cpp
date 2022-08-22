#include "ListaEncadeada.cpp"

using namespace std;

int main()
{
	int nsearch=2;
	char value;
	cout << "Teste Lista Encadeada (CHAR):\n";
	ListaEncadeada<char> list;
	list.insereF('a');
	list.insereF('b');
	list.insereF('e');
	list.insere('c', 2);
	list.insere('d', 3);
	list.imprime();
	value = list.pos(nsearch);
	cout << "\nElemento na posicao "<< nsearch;
	if((int) value > 0 ) 
		cout << ": " << value << "\n";
	else cout << " não encontrado!\n";
	return 0;
}
