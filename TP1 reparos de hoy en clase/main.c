#include <stdio.h>
#include <stdlib.h>
#include "operaciones.h"



int main()
{
    int opcion,division;
    double operador1 = 0;
    double operador2 = 0;
    double suma,resta,multiplicacion,resultadoDivision;
    double factorial1 ;
    double factorial2 ;
    int flagValidarOperaciones = 0;
    int flagFactorialValido1 = 0;
    int flagFactorialValido2 = 0;





    do
    {
        printf("\n+-+-+-+-+-+[CALCULADORA]+-+-+-+-+-+\n");
        printf("\n1- Ingresar 1er operador (A=%.2f)\n",operador1);
        printf("\n2- Ingresar 2do operador (B=%.2f)\n",operador2);
        mostrarMenu();

        opcion = getInt("\nIngrese una Opcion:", "La opcion ingresada es incorrecta.\n",opcion);
        switch(opcion)
        {
        case 1:
            system("cls");
            operador1=getOperadorValido("\nIngrese el primer operador: \n","\nEl numero ingresado no es valido\n");
            system("cls");
            break;
        case 2:
            system("cls");
            operador2=getOperadorValido("\nIngrese el segundo operador: \n","\nEl numero ingresado no es valido\n");
            system("cls");
            break;
        case 3:
            system("cls");

            if(operador1 == 0 && operador2 == 0)
            {
                printf("\nIngrese por lo menos un operador para realizar operaciones.\n");
            }
            else
            {
                flagValidarOperaciones = 1;
                suma = Suma(operador1,operador2);
                resta = Resta(operador1,operador2);
                multiplicacion = Multiplica(operador1,operador2);
                division = Divide(&resultadoDivision,operador1,operador2);

                if(operador1 >= 0 && operador1<= 170)
                {
                factorial1 = factorial(operador1);
                }
                else
                {
                    flagFactorialValido1 = 1;
                }
                if(operador2 >= 0 && operador2<= 170)
                {
                factorial2 = factorial(operador2);
                }
                else
                {
                  flagFactorialValido2 = 1;
                }
                printf("\nSe realizaron todas las operaciones con exito\n");
            }
            break;
        case 4:
            system("cls");
            if(flagValidarOperaciones == 0)
            {
                printf("\nNo se ha realizado ninguna operacion,\npor lo que no se obtuvo ningun resultado.\n");
            }
            else
            {
                printf("\nEl resultado de A+B es: %.2f \n",suma);
                printf("\nEl resultado de A-B es: %.2f\n",resta);
                if(division == 1)
                {
                    printf("\nEl resultado de A/B es: %.2f\n",resultadoDivision);
                }
                else
                {
                    printf("\nNo se puede dividir por 0\n");
                }

                printf("\nEl resultado de A*B es: %.2f\n",multiplicacion);
                if(flagFactorialValido1 == 1)
                {
                    printf("\nEl factorial de A se encuentra fuera de rango o,\nen su defecto el operador es un numero negativo,\npor lo que no se puede obtener factorial\n");
                }
                else
                {
                printf("\nEl factorial de A es: %.2f  \n",factorial1);
                }
                if(flagFactorialValido2 == 1)
                {
                printf("\nEl factorial de B se encuentra fuera de rango o,\nen su defecto el operador es un numero negativo,\npor lo que no se puede obtener factorial\n");
                }
                else
                {
                printf("\nEl factorial de B es: %.2f  \n",factorial2);
                }
                system("pause");
                system("cls");
                flagFactorialValido1 = 0;
                flagFactorialValido2 = 0;
            }
            break;
        }
    }
    while(opcion != 5);
    return 0;
}


