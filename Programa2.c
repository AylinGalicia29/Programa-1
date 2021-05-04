#include <stdio.h>
int main()
{
    /* Galicia Aylin
    Los burros dorados
    21 abr 21
    Programa 3. Pide dos valores reales, calcula promedop y muestra resultado
    */
   float primero, segundo, tercero;
   printf ("\n\n Programa 3");
   printf ("\n\n Saca el promedio de valores reales");
   printf ("\n\n Dame el primer valor real");
   scanf ("%f",&primero); //permite capturar un valor real y lo guardara en variable primero
   printf ("\n\n Dame el segundo valor real");
   scanf ("%f",&segundo); //permite capturar un valor real y lo guardara en variable segundo
   tercero = (primero + segundo)/2;
   printf ("\n El promedio es %f", tercero);
   return 0;
}