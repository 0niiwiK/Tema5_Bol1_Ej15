#include <stdio.h>

void leeVector(int v[], int num, int cifras);
int leeNumero();
int numeroCifras(int num);
void invierteVectores(int v[],int v2[],int cifras);
int vectoresIguales(int v[],int v2[],int cifras);
void imprimeResultados(int iguales, int num);

int main() {
    int num, cifras;
    num=leeNumero();
    cifras= numeroCifras(num);
    int vector[cifras], vectorinverso[cifras];
    leeVector(vector,num,cifras);
    invierteVectores(vector,vectorinverso,cifras);
    imprimeResultados(vectoresIguales(vector,vectorinverso,cifras),num);
    return 0;
}

int leeNumero(){
    int num;
    printf("Introduzca el numero (positivo): ");
    scanf("%d",&num);
    fflush(stdin);
    while (num<0 || num>50000){
        printf("El numero tiene que ser positivo\nIntroduzca el numero (positivo): ");
        scanf("%d",&num);
        fflush(stdin);
    }
    return num;
}

void leeVector(int v[], int num, int cifras){
    for (int i = cifras-1; i >= 0; i--) {
        v[i]=num%10;
        num/=10;
    }

}

int numeroCifras(int num){
    int cifras=0;
    while (num>0){
        num/=10;
        cifras++;
    }
    return cifras;
}

void invierteVectores(int v[],int v2[],int cifras){
    int posicion=cifras-1;
    for (int i = posicion; i >= 0 ; i--) {
        v2[-(i-posicion)]=v[i];
    }
}

int vectoresIguales(int v[],int v2[],int cifras){
    int iguales=1;
    for (int i = 0; i < cifras; ++i) {
        if (v[i]!=v2[i])
            iguales=0;
    }
    return iguales;
}

void imprimeResultados(int iguales, int num){
    if (iguales==0)
        printf("El numero %d NO es capicua",num);
    else
        printf("El numero %d SI es capicua",num);
}