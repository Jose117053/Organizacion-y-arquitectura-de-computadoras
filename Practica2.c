#include<stdio.h>
#include<math.h>
#include<string.h> 
#include <stdlib.h>

float media_aritmetica(float datos[], int n){
    float suma=0;

    for(int i=0; i<n;i++)
        suma+=datos[i];

    return suma/n;
}

float media_armonica(float datos[], int n){
    float suma=0;

    for(int i=0; i<n;i++)
        suma+=(1/datos[i]);

    return n/suma;
}


float media_geometrica(float datos[], int n){

    float producto=1;

    for(int i=0;i<n;i++)
        producto*=datos[i];
     
    return pow(producto, 1.0/n);
}

void uso(){

    printf("Uso: ./Practica2 Practica2 L datos\n");
    printf("Donde L puede ser la letra A, H o G\n");
    printf("Los datos son numeros separados por espacios\n");
    
}

int main(int argc, char *argv[]){

    if(argc < 4 || strcmp(argv[1], "Practica2") != 0){
        uso();
        return 0;
    }
    
    float datos[argc-3];
    
      
    for (int i = 3; i < argc; i++) {

        char *noConvertido;
        float value = strtof(argv[i], &noConvertido);//guarda la direccion del primer caracter que no se pudo convertir en float
        if (*noConvertido != '\0') {
            printf("Error: Entrada invalida '%s'. Introduce numeros validos.\n", argv[i]);
            return 1; 
        }
        datos[i - 3] = value;
        
    }

    switch (argv[2][0])
    {
    case 'A':

        printf("Media aritmetica: %f\n", media_aritmetica(datos,argc-3));

        break;

    case 'H':

        printf("Media armonica: %f\n", media_armonica(datos,argc-3));

        break;

    case 'G':

        printf("Media geometrica: %f\n", media_geometrica(datos,argc-3));

        break;

    default:

        uso();

        break;

    }

    return 0;
}
