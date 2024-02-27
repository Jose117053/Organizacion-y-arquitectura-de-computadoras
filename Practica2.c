#include<stdio.h>
#include<math.h>
#include<string.h> // Include string.h for string functions
#include <stdlib.h>




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
    for(int i=0;i<n;i++){
        producto*=datos[i];
        printf("i: %d dato: %f, producto: %f\n", i, datos[i],producto);
    }

   
    return pow(producto, 1.0/n);
}

void uso(){
    printf("Uso: Practica2 L L L\n");
    printf("Donde L puede ser la letra A,H,G\n");
    printf("Cada entrada L puede ser distinto\n");
}

void banderas(char* hola){
    printf("esto es el apuntador: %c \n",*hola);
}

int main(int argc, char *argv[]){

    
    if(argc <3 ||  strcmp(argv[1], "Practica2") != 0)
        uso();

    float datos[argc-3];

    for(int i=3; i<argc;i++)
        datos[i-3]=(float) atof(argv[i]);

    
    printf("%f", media_geometrica(datos,argc-3));
    return 0;
}
