#include <stdio.h>

union bytes{
    float var;
    unsigned char varBytes[4]; //pq un float tiene 4 bytes
};

int main (void){
    union bytes numbytes;
    printf("Ingrese su float:");
    scanf("%f", &numbytes.var);
    for(int i=3; i>=0; i--){
        printf("%x", numbytes.varBytes[i]);
    }
    return 0;
} // te permite ver bajo la convencion IEEE754 como se almacena en la computadora(en hexa) un float.