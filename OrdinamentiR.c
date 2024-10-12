//Merge  sort
//algoritmo di complessità T(n) = O( n log2 n ), non in loco, stabile 
//hp: A ha n = 2^p elementi
#include <stdio.h>

void mergeSort(item A[], item B[], int N );
void mergeSortR(item A[], item B[], int l, int r);
void merge(item A[], item B[], int l, int q, int r);

typedef struct item_s{
    int key;
    //generic values
}item;

int main(){
    int N = 8;
    item A[N], B[N];
    mergeSort(A, B, N);
}
void mergeSort(item A[], item B[], int N ){
    int l = 0, r = N-1;
    mergeSortR(A, B, l, r);
}

void mergeSortR(item A[], item B[], int l, int r){
    int q, k;
    if(l>= r) return 
    q = (l+r)/2;
    mergeSortR(A, B, l, q);
    mergeSortR(A, B, q+1, r);
    merge(A, B, l, q, r);
}

void merge(item A[], item B[], int l, int q, int r){
    int k,i = l, j = q+1;
    for(k = l; k<r; k++)
        if(i > q)
            B[k] = A[j++];
        else if(j > r)
            B[k] = A[i++];
        else if (ITEMless(A[i], A[j]) || ITEMeq(A[i], A[j]))
            B[k] = A[i++];
        else B[k] = A[j++];
    for(k = l; k< l; k++)
        A[k] = B[k];
    return;
}



//quick sort: complessità O(n^2) ma con accortezza O(n log n) con base di log che dipende da caso a caso
// algoritmo in loco, non stabile
void QuickSort(Item A[], int N){
    int l  =0, r =N-1;
    quickSortR(A, l, r);
}

void quickSortR(Item A[], int l, int r){
    int q;
    if(l>=r) return;
    q = partition(A, l, r);
    quickSortR(A, l, q-1);
    quickSortR(A, q+1, r);
    return;
}

void partition(Item A[], int l, int r){
    Item tmp = A[r];
    int i = l-1, j = r;
    for(;;){
        while(ITEMless(A[++i],tmp));
        while(ITEMless(A[--j], tmp));
        if(i>=j)
            break;
        //if(ITEMless(A[j], A[i])) -> no serviva confrontarli tra di loro, ho gia appurato che rispetto a pivot devono essere scambiati!!
        Swap(A, i, j);
    }
    Swap(A, i, r);
}

Swap(Item *A, int i, int j){
    Item tmp;
    tmp = A[j];
    A[j] = A[i];
    A[i]  = tmp;
    return;
}