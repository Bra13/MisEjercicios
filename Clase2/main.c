#include <stdio.h>
#include <stdlib.h>

int main()
{
    int cantidad = 0;
    int num;
    int max=0;
    int min=0;
    int acumulador = 0;
    float promedio;
    char respuesta;
    do
    {
        printf("ingrese un numero: ");
        scanf("%d",&num);
        acumulador = acumulador + num;
        if(cantidad == 0)
        {
            max = num;
            min = num;

        }else
        {
            if(num>max)
            {
                max = num;
            }
            if(num<min)
            {
                min = num;
            }
        }
        cantidad++;
        printf("Desea seguir ingresando numeros? s/n \n %c");
        fflush(stdin);
        scanf("%c",&respuesta);

    }while(respuesta== 's');
    promedio = acumulador/cantidad;
    printf("El numero max es: %d \n El numero minimo es: %d \n El promedio es: %d",max,min,promedio);
    return 0;
}
