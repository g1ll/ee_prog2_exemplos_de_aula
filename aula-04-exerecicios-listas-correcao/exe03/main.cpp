#include "Fila.cpp"

using namespace std;

int main()
{
	Fila<string> list;
	list.inserir("Gill");
	list.inserir("Velleda");
	list.inserir("Gonzales");
	list.ver();
	cout << "Ola Sr."
		 << " " << list.obter();
	cout << " " << list.obter();
	cout << " " << list.obter() << endl;

	list.ver();
	return 0;
}
