#include <cstdlib>
#include <iostream>
#include <string>
#include "ListaDuplamenteEncadeada.h"
#include "ListaDuplamenteEncadeada.cpp"
#include "elementoD.h"
using namespace std;
int menu(){
  char opt;
  cout << "1 - primeiro \t 2 -anterior \t 3 - proximo \t 4 - ultimo \t 5 - sair" << endl;
  cin >> opt;
  
  while(cin.fail() || (opt < '1'  || opt > '5')){
    cout << "\nEntrada invalida <1 a 5>!" << endl;
    cin.clear();
    cin.ignore(1000,'\n');
    cin >> opt;
  }

  return opt;
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
    opcao = menu();
    switch(opcao){
      case '1': s.primeiro(); break;
      case '2': s.anterior(); break;
      case '3': s.proximo(); break;
      case '4': s.ultimo(); break;
    }
    if(opcao!='5')
      cout << "valor = " << s.retornaAtual() << endl;
    else cout << "Tchau!!!" << endl;
  }while (opcao!='5');
  return EXIT_SUCCESS;
}