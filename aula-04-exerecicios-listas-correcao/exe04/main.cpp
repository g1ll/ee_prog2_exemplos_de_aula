#include "Tasks.cpp"

using namespace std;

void clear();
void char_set();

int main()
{
    int opt;

    string tarefa;
    Tasks tarefas;
    string nomeSobrenome;

    char_set();

    cout << "Informe o seu Nome e Sobrenome:" << endl;
    getline(cin, nomeSobrenome);

    do
    {
        clear();
        cout << "Tarefas de " << nomeSobrenome << endl;

        if (!tarefas.vazio())
        {
            cout << "\n------------------\n";
            tarefas.ver();
            cout << "------------------\n";
        }

        cout << "\n\n1 - Criar Tarefa\n2 - Concluir Tarefa\n3 - Sair";

        cout << "\nEscolha uma das opcoes: ";
        cin >> opt;
        while (cin.fail() || opt < 1 || opt > 3)
        {
            cin.clear();
            cin.ignore(1000, '\n');
            cout << "Opções invalida! Tente novamente 1-3: ";
            cin >> opt;
        }

        switch (opt)
        {
        case 1:
            cout << "\nDescricao da tarefa: ";
            cin.ignore();
            getline(cin, tarefa);
            cout << tarefa;
            tarefas.inserir(tarefa);
            cout << "\nTarefa criada!\n";
            break;
        case 2:
            if (!tarefas.vazio())
            {
                tarefa = tarefas.obter();
                cout << "Tarefa " << tarefa << " concluida!" << endl;
                cin.get();
            }
            else
            {
                tarefas.ver();
                cin.ignore();
            }
            break;
        }

        if (opt != 3)
        {
            cout << "Pressione <enter> para continuar!";
            cin.get();
        }
    } while (opt != 3);
    cout << "\nPrograma encerrado!\n";
    return 0;
}

void char_set(){
     #ifdef _WIN32
        // setlocale(LC_ALL, "portuguese");
        setlocale(LC_ALL, "pt_BR.UTF-8");
    #else
        setlocale(LC_ALL, "pt_BR.UTF-8");
    #endif
}

void clear(){
     #ifdef _WIN32
        system("cls");
    #else
        system("clear");
    #endif
}


//chamada eng.
// guilherme gauterio
// matheus bueno
// flavio garcia
// leandro oliveira
// augusto
// leandro link
// vinicius.


//turma das 19
//Leronardo kurz
//Vitor
//Kevin
//Gabriel Lemos
//Gabriel
//Pedro
//Iuri
//Adelino
//Jhon
//Wesley 
//Gabriel Ferreira