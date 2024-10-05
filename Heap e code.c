#include <stdio.h>
#include <stdlib.h>
#include <HEAP.h>
//Q-ADT

typedef struct item_s{
    int n; //codice univoco
    char *testo;
}*item;

typedef struct heap_vect{
    item dato;
    int heapsize;
}*HEAP;




