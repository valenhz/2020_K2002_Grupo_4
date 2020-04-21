#include<stdio.h>

//hago una prueba de archivos para despues usar en el programa


int main(){
    
    FILE * archivo = fopen("hola.txt", "rb");
    FILE * archivo2 = fopen("chau.txt","wb");
    
    if (archivo == NULL){
        perror("Error en la apertura del archivo");
        return 1;
    }
    char caracter;
    while(feof(archivo)==0){
        caracter = fgetc(archivo);
        printf("%c", caracter);
    }
    
    fprintf(archivo2, "%s", "Escribo algo");
   
    fclose(archivo);
    fclose(archivo2);


    return 0;
}
