#include<stdio.h>

//hago una prueba de archivos para despues usar en el programa


int main(){
    
    FILE * entrada = fopen("entrada.txt", "rb");
    FILE * salida = fopen("salida.txt","wb");
    
    if (entrada == NULL){
        perror("Error en la apertura del archivo");
        return 1;
    }
    char caracter;
    while(feof(entrada)==0){
        caracter = fgetc(entrada);
        printf("%c", caracter);
    }
    
    fprintf(salida, "%s", "Escribo algo");
   
    fclose(entrada);
    fclose(salida);


    return 0;
}
