#include <stdio.h>
#include <stdlib.h>

/*
se declaran las variables que guardaran los resultados de cada seccion
*/
int out;
int out1;
int out2;

/*
funcion que recibe 7 argumentos, devuelve un entero, dependiendo del valor del 7mo valor
si num7>4 retorna la suma de los 4 primer argumentos y les resta el quinto y el sexto
si num7<=4 retorna la suma de los 5 primer argumentos y les resta el sexto argumento 
*/
int funcion(int num1, int num2, int num3, int num4, int num5, int num6, int num7)
{
	if (num7 > 4){
		out1 = num1 + num2 + num3 + num4 - num5 - num6;
		return out1;
		}
	
	else{
		out2 = num1 + num2 + num3 + num4 + num5 - num6;
		return out2;
		}	
}

//Main, se encarga de hacer el llamado de la funcion.
int main()
{
	out = funcion(1,2,3,4,5,6,7);
	//printf("\n\n El resultado de la suma es :%d\n",out);
	
return 0;
}
