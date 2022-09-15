#include "Menu.h"

int Menu::entradaValor(string message, int start, int end)
{
    int opt;
    cout << "\n"
         << message;
    cin >> opt;
    while (cin.fail() || opt < start || opt > end)
    {
        cin.clear();
        cin.ignore(1000, '\n');
        cout << "Opcoes invalida! Tente novamente "
             << start << "-" << end << endl;
        cin >> opt;
    }
    return opt;
}

void Menu::entradaValor(string message, int start, int end, int &opt)
{
    opt = entradaValor(message,start,end,opt)
}
