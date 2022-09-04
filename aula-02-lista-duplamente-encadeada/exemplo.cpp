#include <cstdlib>
#include <iostream>
#include <string>
#include "ListaDuplamenteEncadeada.h"
#include "ListaDuplamenteEncadeada.cpp"
#include "elementoD.h"
using namespace std;
int menu(){
  cout << "1 - primeiro \t 2 -anterior \t 3 - proximo \t 4 - ultimo \t 5 - sair" << endl;
  return getchar();
}

//Exemplo de uso da lista Duplamente Encadeada
int main(int argc, char *argv[]) {
  int opcao;
  ListaDuplamenteEncadeada<int> l; // Cria lista de inteiros;
  ListaDuplamenteEncadeada<string> s; // Cria lista de strings;
  l.insereF(1);
  l.insereF(2);
  l.insereF(5);
  l.insereF(8);
  l.imprime();
  s.insereF("Aula ");
  s.insereF("de ");
  s.insereF("programacao ");
  s.imprime();
  do{
    fflush(stdin);
    opcao = menu();
    switch(opcao){
      case '1': s.primeiro(); break;
      case '2': s.anterior(); break;
      case '3': s.proximo(); break;
      case '4': s.ultimo(); break;
    }
    cout << "valor = " << s.retornaAtual() << endl;
  }while (opcao!='5');
  return EXIT_SUCCESS;
}