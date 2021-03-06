//Implementado por:
//Miguel Antonio Ribeiro e Silva - 4680
//Alan Gabriel Martins Silva - 4663
//Vinicius Alves Gontijo - 4708
//Gabriel Ryan Dos Santos Oliveira- 4688

#include "linked_list.h"



typedef struct tipoItem {
    char *key;
    struct tipoItem *next;
    Lista_Encadeada *lista;
} tipoItem;


typedef struct hashTable {
    int countItens;
    int tamanho;
    tipoItem **entries;
} hashTable;

unsigned int hash(const char *key,int tamanho);
tipoItem *criaItem(const char *key, int indiceDoArq);
hashTable *iniciaTabela(int tamanho);
void inserirNaTabela(hashTable *hashtable, const char *key, int idDoArquivo);
Lista_Encadeada **procurarNaTabela(hashTable *hashtable, const char *key);
void Free_Table(hashTable *hashtable);
void printaTabela(hashTable *tabela);
void printaPalavras_Hash(hashTable *tabela);
int calcPalavras(hashTable *tabela,int idDoArq);

