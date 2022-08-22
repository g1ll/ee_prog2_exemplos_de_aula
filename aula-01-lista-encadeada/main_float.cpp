#include "ListaEncadeada.cpp"

using namespace std;

int main()
{
	int nsearch = 4;
	float value;
	cout << "Teste Lista Encadeada (FLOAT):\n";
	ListaEncadeada<float> list;
	list.insereF(.1);
	list.insereF(.2);
	list.insereF(.5);
	list.insere(.3, 2);
	list.insere(.4, 3);
	list.imprime();
	value = list.pos(nsearch);
	cout << "\nElemento na posicao "<< nsearch;
	if((float) value > 0 ) 
		cout << ": " << value << "\n";
	else cout << " não encontrado!\n";
	return 0;
}
