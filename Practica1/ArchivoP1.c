#include<stdio.h>
#include<stdlib.h>

typedef struct{
    int precio;
    unsigned int codigo_barra;
}Producto;

int main(int argc, char* argv[])
{
    printf("Este es un programa que maneja productos\n");
    Producto* product = (Producto*)malloc(sizeof(Producto));

    printf("\nIngrese el precio del producto 1: ");
    scanf("%d", product->precio);
    printf("\nEl valor del producto que agrego es: %d", product->precio);

    free(product);

    return 0;
}
