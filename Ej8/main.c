#include <stdio.h>
#define TAM 10

void rellenaManual(int v[]);
int posicionMayorPositivo(int v[]);
void imprimeResul(int v[], int pos);

int main() {
    int vector[TAM],posicion_maxima;
    rellenaManual(vector);
    posicion_maxima=posicionMayorPositivo(vector);
    imprimeResul(vector,posicion_maxima);
    return 0;
}

void rellenaManual(int v[]){
    for (int i = 0; i < TAM; i++) {
        printf("Introduce el valor %d (Pos: %d): ",i+1,i);
        scanf("%d",&v[i]);
        fflush(stdin);
    }
}

int posicionMayorPositivo(int v[]){
    int posicion_max=-1;
    for (int i = 0; i < TAM; ++i) {
        if (v[i]>0 && v[i] > posicion_max)
            posicion_max=i;
    }
    return posicion_max;
}

void imprimeResul(int v[], int pos){
    if (pos==-1)
        printf("\nNo hay ningún elemento positivo, imposible calcular el mayor\n");
    else
        printf("\nEl elemento positivo mayor se encuentra en la posicion %d (Valor: %d)\n",pos,v[pos]);
}