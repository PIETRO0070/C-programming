//BinSearch
//ipotizzo vettore ordinato, altrimenti non avrebbe senso
int binSearch(int v[], int l, int r, int k){ //(k: intero da ricercare) ritornerò l'indice 
    int m;
    if(l>r){
        return -1;
    }
    m = (l+r)/2;
    if(v[m] == k)
        return (m);
    if(k<v[m]){
        return binSearch(v, l, m, k);
    }
    return BinSearch(v, m+1, r, k); //l'else è superfluo
}

//oss finale: non c'è ricombinazione, la generazione di soluzione (anche parziale sarà il risultato da analizzare)

//ruler

//funzione stampo linea:
void mark(int x, int h){
    int i;
    printf("%d \t",x );
    for(i =0; i<h; i++){
        printf("*");
    }
    printf("\n");
}


void ruler(int l, int r, int h){
    int m;
    m = (l+r)/2;
    if(h >0){
        ruler(l, m, h-1);
        mark(m, h);
        ruler(m+1, r, h-1);
    }
    return;
}
