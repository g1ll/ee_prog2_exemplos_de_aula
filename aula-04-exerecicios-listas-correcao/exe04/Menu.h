#ifndef MENU_H_
#define MENU_H_
#include <cstdlib>
#include <iostream>

using namespace std;

class Menu{
    public:
    int entradaValor(string message,int start, int end);
    void entradaValor(string message,int start, int end,int &opt);
};
#endif