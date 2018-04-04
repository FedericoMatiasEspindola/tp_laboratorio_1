#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

int main()
{
    char seguir='s';
    int opcion=0;
    int numOne;
    int numTwo;
    int resu;

    while(seguir=='s')
    {
        printf("1- Ingresar 1er operando (A=x)\n");
        printf("2- Ingresar 2do operando (B=y)\n");
        printf("3- Calcular la suma (A+B)\n");
        printf("4- Calcular la resta (A-B)\n");
        printf("5- Calcular la division (A/B)\n");
        printf("6- Calcular la multiplicacion (A*B)\n");
        printf("7- Calcular el factorial (A!)\n");
        printf("8- Calcular todas las operacione\n");
        printf("9- Salir\n");

        scanf("%d",&opcion);

        switch(opcion)
        {
            case 1:
                printf("ingrese primer numero: ");
                scanf("%d", &numOne);
                break;
            case 2:
                printf("ingrese segundo numero: ");
                scanf("%d", &numTwo);
                break;
            case 3:
                resu= sumaNum (numOne,numTwo);
                printf("La suma es: %d\n", resu);
                system("pause");
                system("cls");
                break;
            case 4:
                resu= restaNum (numOne,numTwo);
                printf("La resta es: %d\n", resu);
                system("pause");
                system("cls");
                break;
            case 5:
                resu= divNum (numOne,numTwo);
                printf("La resta es: %d\n", resu);
                system("pause");
                system("cls");
                break;
            case 6:
                resu= multNum (numOne,numTwo);
                printf("La resta es: %d\n", resu);
                system("pause");
                system("cls");
                break;
            case 7:
                break;
            case 8:
                break;
            case 9:
                seguir = 'n';
                break;
        }
    }

    return 0;
}
