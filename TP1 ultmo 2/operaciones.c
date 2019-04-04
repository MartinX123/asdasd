#include <stdio.h>
#include <stdlib.h>
#include "operaciones.h"

void mostrarMenu(){
        printf( "\n3) Calcular todas las operaciones.\n");
        printf( "\n4) Informar resultados.\n");
        printf( "\n5) Salir.\n");}

int GetInt(char texto[], char error[], int minimo,int maximo)
{
    int valida = 0;
    int numero;
    while(valida == 0 )
    {
        printf("%s \n",texto);
        setbuf(stdin,NULL);
        scanf("%d",&numero);

        if(numero<=minimo || numero>=maximo)
        {
            system("cls");
            printf("%s \n ",error);
            printf("El valor ingresado tiene que ser un numero de las opciones que se muestran\n (los numeros entre %d y %d)\n",minimo,maximo);
            printf("\n1- Ingresar 1er operador.\n");
            printf("\n2- Ingresar 2do operador.\n");
            mostrarMenu();

        }else
            {
                valida=1;
            }
    }
    return numero;

}

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
    }else
        {
            *respuesta=operador1/operador2;
            return 1;
        }
}

double GetoperadorValido(char mensaje[],char mensajeError[])
{
    double operador;
    printf("%s",mensaje);
    if(scanf("%lf",&operador))
        {

            return operador;
        }else
        {
            printf("%s\n",mensajeError);
            return 0;
        }




}





