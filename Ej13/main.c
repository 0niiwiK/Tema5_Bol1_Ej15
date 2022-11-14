#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define TAM 15

void rellenaAuto(int v[]);
void imprimeVector(int v[]);
int estaEnVector(int num, int v[]);


int main() {
    int vector[TAM];
    rellenaAuto(vector);
    imprimeVector(vector);
    return 0;
}

void rellenaAuto(int v[]){
    int num;
    srand(time(NULL));
    for (int i = 0; i < TAM; ++i){
        do {
            num=(rand()%999)+1;
        } while (estaEnVector(num,v)==1);
        v[i]=num;
    }
}

void imprimeVector(int v[]){
    printf("VECTOR: |");
    for (int i = 0; i < TAM; i++) {
        printf(" %d |",v[i]);
    }
}

int estaEnVector(int num, int v[]){
    int esta=0;
    for (int i = 0; i < TAM; ++i) {
        if (v[i]==num)
            esta=1;
    }
    return esta;
}