#include <stdio.h>

//PROTOTIPOS
void rellena_vector(int v[]);
void imprime_resultados(int v[]);
void realiza_calculos(int v[], int *p, int *n, int *c);

int main() {
    int v[10];
    rellena_vector(v);
    imprime_resultados(v);
    return 0;
}

void rellena_vector(int v[]){
    for (int i = 0; i < 10; i++) {
        printf("Introduzca numero %d: ",i+1);
        scanf("%d",&v[i]);
    }
}

void imprime_resultados(int v[]){
    int positivos=0, negativos=0, ceros=0;
    realiza_calculos(v,&positivos,&negativos,&ceros);
    printf("\nResultados:\n%d Positivos\n%d Negativos\n%d Ceros\n",positivos,negativos,ceros);
}

void realiza_calculos(int v[], int *p, int *n, int *c){
    for (int i = 0; i < 10; i++) {
        if (v[i]>0)
            *p=*p+1;
        else if (v[i]==0)
            *c=*c+1;
        else
            *n=*n+1;
    }
}