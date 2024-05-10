#include <stdio.h>
#include<conio.h>
#include "funciones.h"
int main () {
    int meses;
    float interes, monto, interesesM;
    instr ();
    meses = scan(1);
    monto = scan(2);
    interes = scan(3);
    interesesM =  iMensual (interes)/100;
    para (meses,monto,interesesM);
    getch();
    return 0;
}