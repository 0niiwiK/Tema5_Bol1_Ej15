#include <stdio.h>
#define TAM 10

//PROTOTIPOS
void rellenaManual(int v[]);
int imparesPosicionPar(int v[]);
float mediaPares(int v[]);

int main() {
    int vector[TAM];
    rellenaManual(vector);
    printf("\nResultados:");
    printf("\nHay %d numeros impares en posiciones pares", imparesPosicionPar(vector));
    printf("\nLa media de los numeros pares es de %f\n", mediaPares(vector));
    return 0;
}

void rellenaManual(int v[]){
    for (int i = 0; i < 10; i++) {
        printf("Introduce el valor %d: ",i+1);
        scanf("%d",&v[i]);
        fflush(stdin);
    }
}

int imparesPosicionPar(int v[]){
    int resul=0;
    for (int i = 0; i < TAM; i+=2) {
        if (v[i]%2!=0)
            resul++;
    }
    return resul;
}

float mediaPares(int v[]){
    int sumatorio=0;
    int pares=0;
    for (int i = 0; i < TAM; i++) {
        if(v[i]%2==0){
            sumatorio+=v[i];
            pares++;
        }
    }
    return (float)sumatorio/(float)pares;
}