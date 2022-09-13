#include "Pilha.cpp"

using namespace std;

int main()
{
	Pilha<string> list;
	list.empilha("Gonzales");
	list.empilha("Velleda");
	list.empilha("Gill");
	list.ver();
#ifdef _WIN32
	// Windows
	cout << "(Windows) Ola Sr." << " " << list.desempilha();
	cout << " " << list.desempilha();
	cout << " " << list.desempilha()  << endl;
#else
// Not windows
cout << "(Linux) Olá Sr."
		 << " " << list.desempilha()
		 << " " << list.desempilha()
		 << " " << list.desempilha() << endl;
#endif
	list.ver();
	return 0;
}
