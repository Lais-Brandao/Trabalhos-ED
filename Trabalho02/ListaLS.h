#include "ListaLS.c"

typedef struct lista Lista;

//01. Inicializa uma nova lista vazia e retorna um ponteiro nulo.
Lista* criarLista();

//02. Adiciona um elemento inteiro ao final da lista. 
Lista* inserirNoFinal(Lista* l, int valor);

//03. Adiciona um elemento inteiro em uma posição específica da lista.
Lista* inserirElemento(Lista* l, int valor, int posicao);

//04. Remove o elemento na posição especificada.
Lista* removerElemento(Lista* l, int posicao);

//05. Remove a primeira ocorrência de um elemento com um valor específico.
Lista* removerPorValor(Lista* l, int valor);

//06. Retorna um elemento na Posição indicada.
int obterElemento(Lista* l, int posicao);

//07. Retorna a posição da primeira ocorrência de um valor especificado. Se não encontrado, 
//retorna uma indicação de não encontrado.
Lista* procurarElemento(Lista* l, int valor);

//08. Retorna o número de elementos atualmente na lista.
int tamanhoDaLista(Lista* l);

//09: Imprime os membros da lista.
void imprimirLista(Lista* l);
