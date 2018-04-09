#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"
#include "funciones.c"



int main()
{
    system("color 0B");
    char seguir='s';
    int opcion=0;
    float numOne;
    float numTwo;
    //int numThree;
    float resu;

    while(seguir=='s')
    {
        printf("************************************* \n");
        printf("*************CALCULADORA************* \n");
        printf("************************************* \n");
        printf("1- Ingresar 1er operando (A=%.2f)\n", numOne);
        printf("2- Ingresar 2do operando (B=%.2f)\n", numTwo);
        printf("3- Calcular la suma (A+B)\n");
        printf("4- Calcular la resta (A-B)\n");
        printf("5- Calcular la division (A/B)\n");
        printf("6- Calcular la multiplicacion (A*B)\n");
        printf("7- Calcular el factorial (A!)\n");
        printf("8- Calcular todas las operaciones\n");
        printf("9- Salir\n");
        printf("************************************* \n");

        scanf("%d",&opcion);

        switch(opcion)
        {
            case 1:
                printf("ingrese primer numero: ");
                scanf("%f", &numOne);
                system("cls");
                break;
            case 2:
                printf("ingrese segundo numero: ");
                scanf("%f", &numTwo);
                system("cls");
                break;
            case 3:
                resu= sumaNum (numOne,numTwo);
                printf("La suma es: %.2f\n", resu);
                system("pause");
                system("cls");
                break;
            case 4:
                resu= restaNum (numOne,numTwo);
                printf("La resta es: %.2f\n", resu);
                system("pause");
                system("cls");
                break;
            case 5:
                if(numTwo==0)
                {
                    printf("error, no se puede dividir por cero, vuelva a ingresar los numeros\n");
                    system("pause");
                    system("cls");
                }
                else
                {
                    resu= divNum (numOne,numTwo);
                    printf("La division es: %.2f\n", resu);
                    system("pause");
                    system("cls");
                }
                break;
            case 6:
                resu= multNum (numOne,numTwo);
                printf("La multiplicacion es: %.2f\n", resu);
                system("pause");
                system("cls");
                break;
            case 7:
                //numThree=numOne;
                if(numOne>0 || numOne <35)
                {
                    resu=factnum(numOne);
                    printf("El factorial del numero %.2f es: %.2f\n \n",numOne,resu);
                }
                else
                {
                    if (numOne<1)
                    {
                        printf("El factorial del numero %d no puede ser calculado, ingrese otro numero\n",numOne);
                    }
                    else
                    {
                        printf("El factorial ingresado es muy grande para ser calculado\n");
                    }
                }

                system("pause");
                system("cls");
                break;
            case 8:
                resu= sumaNum (numOne,numTwo);
                printf("La suma es: %.2f\n", resu);

                resu= restaNum (numOne,numTwo);
                printf("La resta es: %.2f\n", resu);

                if(numTwo==0)
                {
                    printf("error, no se puede dividir por cero, vuelva a ingresar los numeros\n");
                }
                else
                {
                    resu= divNum (numOne,numTwo);
                    printf("La division es: %.2f\n", resu);
                }

                resu= multNum (numOne,numTwo);
                printf("La multiplicacion es: %.2f\n", resu);










                system("pause");
                system("cls");
                break;
            case 9:
                seguir = 'n';
                break;
        }
    }

    return 0;
}

