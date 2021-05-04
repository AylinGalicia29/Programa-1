#include <stdio.h>
int main()
{
    /* Galicia Aylin
    Loa burros dorados
    21 abr 21
    Programa 4. Pide dos valores reales, calcula multiplica, divide y muestra resultado
    */
   float primero, segundo, multiplica, division;
   printf ("\n\n Programa 3");
   printf ("\n\n Saca el promedio de valores reales");
   printf ("\n\n Dame el primer valor real");
   scanf ("%f",&primero); //permite capturar un valor real y lo guardara en variable primero
   printf ("\n\n Dame el segundo valor real");
   scanf ("%f",&segundo); //permite capturar un valor real y lo guardara en variable segundo
   multiplica = (primero * segundo);
   division = (primero / segundo);
   printf ("\n El promedio es %f", multiplica);
   printf ("\n El promedio es %f", division);
   return 0;