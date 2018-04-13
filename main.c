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
    int numThree;
    float resu;

    while(seguir=='s')
    {
        printf("***************************************** \n");
        printf("***************CALCULADORA*************** \n");
        printf("*****************************************\n");
        printf("1- Ingresar 1er operando \t (A=%.2f)\n", numOne);
        printf("2- Ingresar 2do operando \t (B=%.2f)\n", numTwo);
        printf("3- Calcular la suma \t\t (A+B)\n");
        printf("4- Calcular la resta \t\t (A-B)\n");
        printf("5- Calcular la division \t (A/B)\n");
        printf("6- Calcular la multiplicacion \t (A*B)\n");
        printf("7- Calcular el factorial \t (A!)\n");
        printf("8- Calcular todas las operaciones\n");
        printf("9- Salir\n");
        printf("***************************************** \n");
        printf("*******ESPINDOLA*MATIAS*FEDERICO********* \n");
        printf("***************************************** \n");
        printf("Ingrese opcion deseada: ");
        scanf("%d",&opcion);
        switch(opcion)
        {
            case 1:
                printf("Ingrese primer operando: ");
                scanf("%f", &numOne);
                system("cls");
                break;
            case 2:
                printf("Ingrese segundo operando: ");
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
                    printf("Error, no se puede dividir por cero, vuelva a ingresar los numeros\n");
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
                numThree=numOne;
                if(numThree > 12)
                    {
                        printf("Eroor, Numero demasiado grande para factorizar.\n");
                    }
                    else
                    {
                        if(numThree == 0)
                        {
                            printf("El factorial del primer operando es 1\n");
                        }
                        else
                        {
                            if(numThree < 0)
                            {
                                printf("Error, Reingrese el primer operando.\n");
                            }

                            else
                            {
                                printf("El factorial del primer operando es: %d\n" , factnum (numThree));
                            }
                        }
                    }
                system("pause");
                system("cls");
                break;
            case 8:
                //suma
                resu= sumaNum (numOne,numTwo);
                printf("La suma es: %.2f\n", resu);
                //resta
                resu= restaNum (numOne,numTwo);
                printf("La resta es: %.2f\n", resu);
                //division
                if(numTwo==0)
                {
                    printf("error, no se puede dividir por cero, vuelva a ingresar los numeros\n");
                }
                else
                {
                    resu= divNum (numOne,numTwo);
                    printf("La division es: %.2f\n", resu);
                }
                //multiplicacion
                resu= multNum (numOne,numTwo);
                printf("La multiplicacion es: %.2f\n", resu);
                //factorizar
                numThree=numOne;
                if(numThree > 12)
                    {
                        printf("ERROR. Numero demasiado grande para factorizar.\n");
                    }
                    else
                    {
                        if(numThree == 0)
                        {
                            printf("El factorial del primer operando es 1\n");
                        }
                        else
                        {
                            if(numThree < 0)
                            {
                                printf("ERROR. Reingrese el primer operando.\n");
                            }

                            else
                            {
                                printf("El factorial del primer operando es: %d\n" , factnum (numThree));
                            }
                        }
                    }
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

