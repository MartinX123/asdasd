#include <stdio.h>
#include <stdlib.h>
#include "operaciones.h"

void mostrarMenu()
{
    printf( "\n3) Calcular todas las operaciones.\n");
    printf( "\n4) Informar resultados.\n");
    printf( "\n5) Salir.\n");
}

int getInt(char mensaje[],char mensajeError[], int opcion)
{
    printf("%s",mensaje);
    fflush(stdin);
    scanf("%d",&opcion);
    if(opcion >= 1 || opcion <=5)
    {
        return opcion;
    }
    else
    {
        printf("%s",mensajeError);
        system("pause");
        system("cls");

        return 0;
    }
}
/*int GetInt(char texto[], char error[],int minimo,int maximo)
{
    int valida = 0;
    int numero;
    while(valida == 0 )
    {
        printf("%s \n",texto);
        fflush(stdin);
        scanf("%d",&numero);

        if(numero<=minimo || numero>=maximo)
        {
            system("cls");
            printf("%s \n ",error);
            printf("El valor ingresado tiene que ser un numero de las opciones que se muestran\n (los numeros entre %d y %d)\n",minimo,maximo);
            printf("\n1- Ingresar 1er operador.\n");
            printf("\n2- Ingresar 2do operador.\n");
            mostrarMenu();

        }
        else
        {
            valida=1;
        }
    }
    return numero;

}*/

double Suma(double operador1, double operador2)
{
    return operador1+operador2;
}

double Resta(double operador1, double operador2)
{
    return operador1-operador2;
}

double Multiplica(double operador1, double operador2)
{
    return operador1*operador2;
}

int Divide(double * respuesta,double operador1, double operador2)
{
    if (operador2 == 0)
    {
        return 0;
    }
    else
    {
        *respuesta=operador1/operador2;
        return 1;
    }
}

double getOperadorValido(char mensaje[],char mensajeError[])
{
    double operador;
    printf("%s",mensaje);
    fflush(stdin);
    if(scanf("%lf",&operador))
    {
        return operador;
    }
    else
    {
        printf("%s",mensajeError);
        system("pause");
        return 0;
    }


}
double factorial(double operador)
{
    double acumulador = 1;
    double i;
    for(i = operador; i>0; i--)
    {
        acumulador *= i;

    }
    return acumulador;

}

