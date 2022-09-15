#include "Tasks.cpp"
#include "Menu.cpp"

using namespace std;

void clear();
void char_set();

int main()
{
    int opt;

    string descricao;
    Tasks tarefas;
    Menu menu;
    string nomeSobrenome;
    
    char_set();

    cout << "Informe o seu Nome e Sobrenome:" << endl;
    getline(cin, nomeSobrenome);

    do
    {
        system("cls");
        cout << "Tarefas de " << nomeSobrenome << endl;

        if (!tarefas.vazio())
        {
            cout << "\n------------------\n";
            tarefas.ver();
            cout << "------------------\n";
        }

        cout << "\n\n1 - Criar Tarefa\n2 - Concluir Tarefa\n3 - Sair";
        
        menu.entradaValor("Escolha uma das opcoes: ",1,3,opt);

        switch (opt)
        {
        case 1:
            cout << "\nDescricao da tarefa: ";
            cin.ignore();
            getline(cin, descricao);
            cout << descricao;
            tarefas.inserir(descricao);
            cout << "\nTarefa criada!\n";
            break;
        case 2:
            if (!tarefas.vazio())
            {
                descricao = tarefas.obter();
                cout << "Tarefa " << descricao << " concluida!" << endl;
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