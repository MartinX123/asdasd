#include <stdio.h>
#include <stdlib.h>
#include "operaciones.h"




void MuestraMenu()
{
    printf( "\n3) Calcular todas las operaciones\n");
    printf( "\n4) Informar resultados\n");
    printf( "\n5) Salir\n");
}

int GetInt(char texto[], char error[], int minimo, int maximo)
{
    int valida = 0;
    int numero;
    while(valida == 0 )
    {
        printf("%s \n",texto);
        setbuf(stdin,NULL);
        scanf("%d",&numero);

        if((numero<=minimo) || (numero>=maximo))
        {
            printf("%s \n ",error);
            printf("El valor ingresado tiene que ser un numero de las opciones que se muestran\n (los numeros entre %d y %d)\n",minimo,maximo);
        }else
            {
                valida=1;
            }
    }
    return numero;

}

float Suma(float operador1, float operador2)
{
    return operador1+operador2;
}

float Resta(float operador1, float operador2)
{
    return operador1-operador2;
}

float Multiplica(float operador1, float operador2)
{
    return operador1*operador2;
}

int Divide(float * respuesta,float operador1, float operador2)
{
    if (operador2 == 0)
    {
        return 0;
    }else
        {
            *respuesta=operador1/operador2;
            return 1;
        }
}

float GetoperadorValido(char msg[],char msgError[])
{
    float operador;
    printf("%s",msg);
    if(scanf("%f",&operador))
        {
            return operador;
        }else
        {
            printf("%s\n",msgError);
            return 0;
        }
}



