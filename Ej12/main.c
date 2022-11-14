#include <stdio.h>

void rellenaManual5(int v[]);
void uneVectores(int v1[], int v2[], int vresul[]);
void imprimeVector(int v[]);

int main() {
    int v1[5], v2[5], vector[10];
    printf("Vector 1\n--------\n");
    rellenaManual5(v1);
    printf("\nVector 2\n--------\n");
    rellenaManual5(v2);
    uneVectores(v1,v2,vector);
    imprimeVector(vector);
    return 0;
}

void rellenaManual5(int v[]){
    for (int i = 0; i < 5; i++) {
        printf("Casilla %d: ",i+1);
        scanf("%d",&v[i]);
        fflush(stdin);
    }
}

void uneVectores(int v1[], int v2[], int vresul[]){
    for (int i = 0; i < 10; ++i) {
        if (i<5){
            vresul[i]=v1[i];
        } else {
            vresul[i]=v2[i-5];
        }
    }
}

void imprimeVector(int v[]){
    printf("\nVECTOR: |");
    for (int i = 0; i < 10; ++i) {
        if (v[i]>=0)
            printf(" %d |",v[i]);
    }
}