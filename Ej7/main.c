#include <stdio.h>

/* Realizar un programa que cargue un vector con 10 valores. Después solicitará un número ‘x’ y mostrará en pantalla
 * todos aquellos elementos mayores de ‘x’ junto con la posición que ocupan en el vector.
 * En caso de no existir ninguno se mostrará el siguiente mensaje: "NO HAY NUMEROS MAYORES DE X". */

#define TAM 10

void rellenaManual(int v[]);
int escaneaNum();
void mayoresQueN(int v[],int num);

int main() {
    int vector[TAM], numero;
    rellenaManual(vector);
    numero=escaneaNum();
    mayoresQueN(vector,numero);
    return 0;
}

void rellenaManual(int v[]){
    for (int i = 0; i < TAM; i++) {
        printf("Introduce el valor %d: ",i+1);
        scanf("%d",&v[i]);
        fflush(stdin);
    }
}

int escaneaNum(){
    int num;
    printf("Introduce un numero: ");
    scanf("%d",&num);
    fflush(stdin);
    return num;
}

void mayoresQueN(int v[],int num){
    printf("\nElementos mayores que %d:",num);
    for (int i = 0; i < TAM; ++i) {
        if (v[i]>num){
            printf("\n%d (Posicion %d en el vector)",v[i],i);
        }
    }
}