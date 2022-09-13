#include "../exe03/Fila.cpp"

using namespace std;

class Tasks:public Fila<string>{
public:
	string obter();
	void ver();
	bool vazio();
};

string Tasks::obter()
{
	if (tam > 0)
	{
		--tam;
		Elemento<string> *lixo = primeiro;
		primeiro = primeiro->prox;
		string valor = lixo->valor;
		delete lixo;
		return valor;
	}
	else
		return "";
}

void Tasks::ver(){
  if (tam > 0)
  {
    Elemento<string> *temp = primeiro;
    for (int i = 1; i <= tam; i++, temp = temp->prox)
    {
		cout << i << ": " << temp->valor << endl;
    }
  }
  else
  {
    cout << "\nNão há tarefas pendentes!" << endl;
  }
}

bool Tasks::vazio(){
	return tam==0;
}