#include <stdio.h>

union numero{
    float flotante;
    unsigned char caracter;
};

int main(void){
    union numero num;
    printf("\nIngresa el valor del numero: ");
    scanf("%f", &num.flotante);

    unsigned char *puntero = &num.caracter; // apuntar a un float puede dar error
    printf("El float esta guardado en la memoria como 0x");
    
    for(int i=3; i>=0; i--){
        printf("%02X", *(puntero+i));//*indica que se imprime el valor dentro de la direccion del puntero
    }
}
