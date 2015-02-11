#include <stdio.h>
#include <stdlib.h>

#include "intLinkedList.h"


/*
 * Restituisce la lunghezza della lista.
 */
int size(intLinkedList list) {
    
    int r;
    
    for(r=0;list!=NULL;r++)list=list->next;
    
    return r;
}


/*
 * Aggiunge un nuovo elemento all'inizio della lista.
 * Restituisce il puntatore aggiornato al primo elemento.
 * Restituisce NULL in caso di errore.
 */
intLinkedList insertAtBeginning(intLinkedList list, int newKey) {
    
    intLinkedList temp;
    
    temp=(intLinkedList)malloc(sizeof(intLLElement));
    
    if(temp!=NULL){
        temp->next=list;
        temp->key=newKey;
        list=temp;
    }
    else list=NULL;
    
    return list;
}


/*
 * Stampa tutti gli elementi della lista a schermo, in un'unica linea, 
 * separandoli con punto e virgola e uno spazio.
 * 
 * Esempio:
 * 1; -2; 3; 4;  
 * 
 */
void printList(intLinkedList list) {
    
    while(list!=NULL){
        printf("%d; ",list->key);
        list=list->next;
    }
}


/*
 * Svuota la lista.
 * Restituisce sempre NULL.
 */
intLinkedList empty(intLinkedList list) {
    
    intLinkedList delete=list;
    
    while(list!=NULL){
       list=list->next;
       free(delete);
       delete=list;
    }
    // TODO Implementa il corpo della funzione
    
    return NULL;
}