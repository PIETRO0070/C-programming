#include <stdio.h>

//fibonacci tail_recursive
unsigned long fib(int n, int a, int b);

int main(){
    int n = 3;
    for (int i = 0; i < n; i++)
    {
        fprintf(stdout, "%d", fib(i, 0,1));
    }
    
}

unsigned long fib(int n, int a, int b){
    if(n == 0 ) return a; //usto solo per stampare '0'
    else if(n  == 1)    return b;
    else return fib(n-1, b, a+b);

    //return (fib(n-1) + fib(n-2)); //svlogo come ultima fib?-> no, faccio somma


    

    
}