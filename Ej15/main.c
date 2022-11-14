#include <stdio.h>

int pideNumero();
void decimalABinarioVector(int v[],int num);
void imprimeVector(int v[],int num);

int main() {
    int vector[6],num;
    num=pideNumero();
    decimalABinarioVector(vector,num);
    imprimeVector(vector,num);
    return 0;
}

int pideNumero(){
    int num;
    printf("Introduzca un numero no superior a 40: ");
    scanf("%d",&num);
    fflush(stdin);
    while (num<0 || num>40){
        printf("Numero invalido\nIntroduzca un numero no superior a 40: ");
        scanf("%d",&num);
        fflush(stdin);
    }
    return num;
}

void decimalABinarioVector(int v[],int num){
    for (int i = 5; i >= 0; i--) {
        v[i]=num%2;
        num/=2;
    }
}

void imprimeVector(int v[],int num){
    int formato=0;
    printf("\nEl numero %d en binario es: ",num);
    for (int i = 0; i < 6; i++) {
        if (formato==0 && v[i]==1){
            printf("%d",v[i]);
            formato=1;
        }
        else if (formato==1)
            printf("%d",v[i]);
    }
}