#include "MinhaListaEncadeada.cpp"

using namespace std;

int main()
{
	int value,n;

	MinhaListaEncadeada<int> list;

	cout << "Informa a quantidade de Elementos:\n";
	cin >> n;
	for(int i=0;i<n;i++){
		cout << "Dado de entrada para o Elemento "<<i+1<<": ";
		cin >> value;
		list.insereF(value);
	}
	list.imprime();
	list.inverte();
	list.imprime();
	// value = list.pos(nsearch);
	// cout << "\nElemento na posicao "<< nsearch;
	// if((int) value > 0 ) 
	// 	cout << ": " << value << "\n";
	// else cout << " não encontrado!\n";
	return 0;
}
