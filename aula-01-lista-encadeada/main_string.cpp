#include "ListaEncadeadaString.cpp"
#include <sstream>

using namespace std;

int main()
{
	int nsearch = 1;
	cout << "Teste Lista Encadeada (STRING):\n";
	ListaEncadeadaString list;
	list.insereF("Primeiro");
	list.insereF("Segundo");
	list.insereF("Quinto");
	list.insere("Terceiro", 2);
	list.insere("Quarto", 3);
	list.imprime();
	while (nsearch != 0)
	{
		cout << "\nRetornar um elemento na posicao: ";
		cin >> nsearch;
		if(nsearch != 0)
		cout << "Elemento "<< nsearch << ": " 
		<< list.pos(nsearch - 1) << endl;
	};
	return 0;
}
