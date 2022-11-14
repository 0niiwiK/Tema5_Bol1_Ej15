#include <stdio.h>
#define TAM 6

void rellenaPolinomio(int v[],int n);
void muestraPolinomio(int v[],int n);
void sumaPolinomio(int v1[], int v2[], int v3[]);
void restaPolinomio(int v1[], int v2[], int v3[]);
void muestraPolinomioSuma(int v[]);
void muestraPolinomioResta(int v[]);

int main() {
    int pol1[TAM],pol2[TAM],polsuma[TAM],polresta[TAM];
    rellenaPolinomio(pol1,1);
    muestraPolinomio(pol1,1);
    rellenaPolinomio(pol2,2);
    muestraPolinomio(pol2,2);
    sumaPolinomio(pol1,pol2,polsuma);
    restaPolinomio(pol1,pol2,polresta);
    muestraPolinomioSuma(polsuma);
    muestraPolinomioResta(polresta);

    return 0;
}

void rellenaPolinomio(int v[],int n){
    printf("\nPOLINOMIO %d:",n);
    printf("\n-------------\n");
    for (int i = TAM-1; i >= 0; i--) {
        printf("Introduzca termino de orden %d: ",i);
        scanf("%d",&v[i]);
        fflush(stdin);
    }
}

void muestraPolinomio(int v[],int n){
    printf("\nPOLINOMIO %d:",n);
    printf("\n-------------\n");
    for (int i = 5; i > 0; i--) {
        if (v[i]>0)
            printf("+%dX^%d ",v[i],i);
        else
            printf("%dX^%d ",v[i],i);
    }
    if (v[0]>0)
        printf("+%d",v[0]);
    else
        printf("%d",v[0]);
    printf("\n");
}

void sumaPolinomio(int v1[], int v2[], int v3[]){
    for (int i = 0; i < TAM; ++i) {
        v3[i]=v1[i]+v2[i];
    }
}

void restaPolinomio(int v1[], int v2[], int v3[]){
    for (int i = 0; i < TAM; ++i) {
        v3[i]=v1[i]-v2[i];
    }
}

void muestraPolinomioSuma(int v[]){
    printf("\nPOLINOMIO SUMA:");
    printf("\n-------------\n");
    for (int i = 5; i > 0; i--) {
        if (v[i]>0)
            printf("+%dX^%d ",v[i],i);
        else
            printf("%dX^%d ",v[i],i);
    }
    if (v[0]>0)
        printf("+%d",v[0]);
    else
        printf("%d",v[0]);
    printf("\n");
}

void muestraPolinomioResta(int v[]){
    printf("\nPOLINOMIO RESTA:");
    printf("\n-------------\n");
    for (int i = 5; i > 0; i--) {
        if (v[i]>0)
            printf("+%dX^%d ",v[i],i);
        else
            printf("%dX^%d ",v[i],i);
    }
    if (v[0]>0)
        printf("+%d",v[0]);
    else
        printf("%d",v[0]);
    printf("\n");
}