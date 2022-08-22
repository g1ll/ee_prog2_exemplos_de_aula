#include "ListaEncadeadaString.h"

ListaEncadeadaString::ListaEncadeadaString() {
  cabeca = NULL; // Lista vazia
  tam = 0;
}

string ListaEncadeadaString::pos(int pos){
 if ((pos < tam) && (pos >= 0)) { //Verifica se a posicao valida
    Elemento<string> *onde = cabeca; // Ponteiro auxiliar
    for (int i = 0; i < pos; i++) // Avanca ate a posicao que se queira
      onde = onde->prox; // Avanca 1 posicao
    return onde->valor; //Retorna o valor
  } else
    return "Nao encontrado!";
} // Retorna o elemento na posicao pos ou 'Nao encontrado'
