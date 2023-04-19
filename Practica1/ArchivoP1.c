#include<stdio.h>
#include<stdlib.h>

typedef struct{
    int precio;
    unsigned int codigo_barra;
}Producto;

void Set_Precio(Producto* this, int price)
{
    this->precio = price;
}

int main(int argc, char* argv[])
{
    int prec;
    printf("Este es un programa que maneja productos\n");
    Producto* product = (Producto*)malloc(sizeof(Producto));

    printf("\nIngresa el precio del producto: ");
    scanf("%d",&prec);
    Set_Precio(product, prec);
    printf("\nEl valor del producto que agrego es: %d", product->precio);

    free(product);

    return 0;
}
