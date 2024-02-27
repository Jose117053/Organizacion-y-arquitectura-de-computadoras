#include<stdio.h>

int main(int argc, char *argv[]){

    
    return 0;
}


//Una funci ́on que calcule la media aritm ́etica un areglo de datos, recibe el
//arreglo de datos y el n ́umero de datos en el arreglo.
float media_aritmetica(float datos[], int n){
    float suma=0;

    for(int i=0; i<n;i++)
        suma+=datos[i];

    return suma/n;
}


//Una funci ́on que calcule la media arm ́onica de un areglo de datos, recibe
//el arreglo de datos y el n ́umero de datos en el arreglo.
float media_armonica(float datos[], int n){
    float suma=0;

    for(int i=0; i<n;i++)
        suma+=(1/datos[i]);

    return n/suma;
}


//Una funci ́on que calcule la media geom ́etrica de un areglo de datos, recibe
//el arreglo de datos y el n ́umero de datos en el arreglo.
float media_geometrica(float datos[], int n){

    float producto=1;
    for(int i=0;i<n;i++)
        producto*=datos[i];

    return pow(producto, 1/n);
}

