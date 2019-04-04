
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
 * \param operador1 double
 * \param operador2 double
 * \return double la suma de los numeros
 *
 */

double Suma(double operador1, double operador2);
/** \brief resta dos numeros
 *
 * \param operador1 double
 * \param operador2 double
 * \return devuelve la resta
 *
 */

double Resta(double operador1, double operador2);

/** \brief multiplica 2 numeros
 *
 * \param operador1 double
 * \param operador2 double
 * \return double devuelve la multiplicacion
 *
 */

double Multiplica(double operador1, double operador2);
/** \brief  realiza la division de dos numeros
 *
 * \param  respuesta, guarda el valor
 * \param operador1 double
 * \param operador2 double
 * \return 0 si el segundo numero es un 0, 1 si la operacion es correcta
 *
 */
int Divide(double * respuesta, double operador1, double operador2);

/** \brief valida operador ingresado
*
* \param char mensaje a mostrar; pide numero
* \param char mensaje a mostrar; error numero invalido
* \return operador validado, o 0 segun corresponda
*
*/
double GetoperadorValido(char msg[],char msgError[]);

/** \brief obtiene factorial
*
* \param numero/s a operar
* \return factorial del o los operadores
*
*/
double factorial(double operador);


#endif // OPERACIONES_H_INCLUDED


