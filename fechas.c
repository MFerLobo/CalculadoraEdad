#include<stdio.h>

int main(void)
{
    int fechaN, diaN, mesN, anioN, fechahoy, diahoy, meshoy, aniohoy, edad, fechahoydias, fechaNdias;
    printf("Ingrese su fecha de nacimiento como un numero entero de 8 cifras:\n");
    scanf("%d", &fechaN);
    printf("Ingrese la fecha de hoy como un numero entero de 8 cifras\n");
    scanf("%d", &fechahoy);
    anioN = fechaN % 10000;
    diaN = fechaN / 1000000;
    mesN = (fechaN - (diaN * 1000000))/10000;
    aniohoy = fechahoy % 10000;
    diahoy = fechahoy / 1000000;
    meshoy = (fechahoy - (diahoy * 1000000))/10000;
    fechahoydias = (aniohoy - 1) * 365 + (meshoy - 1) * 30 + diahoy;
    fechaNdias = (anioN - 1) * 365 + (mesN - 1) * 30 + diaN;
    edad = (fechahoydias - fechaNdias) / 365;

    printf("Su edad aproximada es: %d", edad);
    return 0; 

}