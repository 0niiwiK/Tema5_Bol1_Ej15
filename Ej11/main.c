#include <stdio.h>
#define TAM 10

void rellenaManual(int v[]);
void inicializaVecor(int v[]);
void imprimeVector(int v[]);


int main() {
    int vector[TAM];
    inicializaVecor(vector);
    rellenaManual(vector);
    imprimeVector(vector);
    return 0;
}

void rellenaManual(int v[]){
    int i=0,num;
    do {
        printf("Casilla %d: ",i+1);
        scanf("%d",&num);
        fflush(stdin);
        if (num>=0)
            v[i]=num;
        i++;
    } while (i<TAM && num>=0);
}

void inicializaVecor(int v[]){
    for (int i = 0; i < TAM; ++i) {
        v[i]=-1;
    }
}

void imprimeVector(int v[]){
    printf("\nVECTOR: |");
    for (int i = 0; i < TAM; ++i) {
        if (v[i]>=0)
            printf(" %d |",v[i]);
    }
}