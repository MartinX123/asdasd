
#ifndef OPERACIONES_H_INCLUDED
#define OPERACIONES_H_INCLUDED

void mostrarMenu();

/** \brief Obtiene un entero
 *
 * \param texto[] char mensaje a mostrar
 * \param error[] char mensaje de error
 * \param minimo int
 * \param maximo int
 * \return int devuelve el numero obtenido
 *
 */

int GetInt(char texto[], char error[], int minimo, int maximo);

/** \brief suma dos numeros
 *
 * \param operador1 float
 * \param operador2 float
 * \return float la suma de los numeros
 *
 */

float Suma(float operador1, float operador2);
/** \brief resta dos numeros
 *
 * \param operador1 float
 * \param operador2 float
 * \return devuelve la resta
 *
 */

float Resta(float operador1, float operador2);

/** \brief multiplica 2 numeros
 *
 * \param operador1 float
 * \param operador2 float
 * \return float devuelve la multiplicacion
 *
 */

float Multiplica(float operador1, float operador2);
/** \brief  realiza la division de dos numeros
 *
 * \param  respuesta, guarda el valor
 * \param operador1 float
 * \param operador2 float
 * \return 0 si el segundo numero es un 0, 1 si la operacion es correcta
 *
 */
int Divide(float * respuesta, float operador1, float operador2);

/** \brief valida operador ingresado
*
* \param char mensaje a mostrar; pide numero
* \param char mensaje a mostrar; error numero invalido
* \return operador validado, o 0 segun corresponda
*
*/
float GetoperadorValido(char msg[],char msgError[]);

/** \brief obtiene factorial
*
* \param numero/s a operar
* \return factorial del o los operadores
*
*/
float factorial(float operador);


#endif // OPERACIONES_H_INCLUDED


