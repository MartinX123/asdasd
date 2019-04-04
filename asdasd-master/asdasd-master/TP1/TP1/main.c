#include <stdio.h>
#include <stdlib.h>
#include "operaciones.h"


float factorial(float operador);
int main()
{
    int opcion,division;
    float operador1;
    float operador2;
    float suma,resta,multiplicacion,resultadoDivision;
    float factorial1,factorial2;



    do
    {
        printf("+-+-+-+-+-+[CALCULADORA]+-+-+-+-+-+\n");
        printf("\n1- Ingresar 1er operador (A=%.2f)\n",operador1);
        printf("\n2- Ingresar 2do operador (B=%.2f)\n",operador2);
        MuestraMenu();

        opcion=GetInt("Ingrese una Opcion:", "La opcion ingresada es incorrecta.",0,6);


        switch(opcion)
            {
                case 1:
                    system("cls");
                    operador1=GetoperadorValido("Ingrese el primer operador: ","El numero ingresado es incorrecto ");
                    break;
                case 2:
                    system("cls");
                    operador2=GetoperadorValido("Ingrese el segundo operador: ","El numero ingresado es incorrecto ");
                    break;
                case 3:
                    system("cls");
                    suma = Suma(operador1,operador2);
                    resta = Resta(operador1,operador2);
                    multiplicacion = Multiplica(operador1,operador2);
                    division = Divide(&resultadoDivision,operador1,operador2);
                    factorial1 = factorial(operador1);
                    factorial2 = factorial(operador2);
                    printf("Se realizaron todas las operaciones \n");

                    break;
                case 4:
                    system("cls");
                    printf("El resultado de A+B es: %.2f \n",suma);
                    printf("El resultado de A-B es: %.2f\n",resta);
                    if(division == 1)
                        {
                            printf("El resultado de A/B es: %.2f\n",resultadoDivision);
                        }
                    else
                        {
                            printf("No se puede dividir por 0\n");
                        }

                    printf("El resultado de A*B es: %.2f\n",multiplicacion);
                    printf("El factorial de A es: %.2f y El factorial de B es: %.2f \n",factorial1,factorial2);
                    system("pause");
                    system("cls");

                    break;
            }

    }while(opcion != 5);



  return 0;
 }
 float factorial(float operador)
        {
            float respuesta;
            if(operador == 1 || operador == 0)
            return 1;
            respuesta = operador * factorial(operador - 1);
            return respuesta;
        }




