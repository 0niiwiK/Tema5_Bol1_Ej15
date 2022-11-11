#include <stdio.h>
#define TAM 10

int menorVector(int v[]);
int mayorVector(int v[]);
void rellenaManual(int v[]);
float sumaElementos(int v[]);
float mediaAritmetica(float suma);

int main() {
    int vector[TAM];
    rellenaManual(vector);
    float suma= sumaElementos(vector);
    printf("\nLa suma de los elementos del vector es: %.0f",suma);
    printf("\nLa media aritmetica de los elementos del vector es: %.2f", mediaAritmetica(suma));
    mayorVector(vector);
    menorVector(vector);
    return 0;
}

void rellenaManual(int v[]){
    for (int i = 0; i < TAM; i++) {
        printf("Introduce el valor %d (Pos: %d): ",i+1,i);
        scanf("%d",&v[i]);
        fflush(stdin);
    }
}

int mayorVector(int v[]){
    int pos_max=0;
    for (int i = 0; i < TAM; ++i) {
        if (v[i] > v[pos_max])
            pos_max=i;
    }
    printf("\nEl valor maximo es: %d (Posicion: %d)",v[pos_max],pos_max);
    return pos_max;
}

int menorVector(int v[]){
    int pos_min=0;
    for (int i = 0; i < TAM; ++i) {
        if (v[i] < v[pos_min])
            pos_min=i;
    }
    printf("\nEl valor minimo es: %d (Posicion: %d)",v[pos_min],pos_min);
    return pos_min;
}

float sumaElementos(int v[]){
    float suma=0;
    for (int i = 0; i < TAM; ++i) {
        suma+=(float)v[i];
    }
    return suma;
}

float mediaAritmetica(float suma){
    return suma/TAM;
}