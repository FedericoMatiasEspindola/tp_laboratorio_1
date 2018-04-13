/* *sumaNum
* \brief Pide dos numeros float y se suman
* \param Se suman los numeros y el total se asigna a resultado
* \return el resultado se imprime en pantalla
*/
float sumaNum (float a, float b)
{
    float resultado;
    resultado = a+b;
    return resultado;
}

/* *restaNum
* \brief Pide dos numeros float y se restan
* \param Se restan los numeros y el total se asigna a resultado
* \return el resultado se imprime en pantalla
*/
float restaNum (float a, float b)
{
    float resultado;
    resultado = a-b;
    return resultado;
}

/* *divNum
* \brief Pide dos numeros float y se dividen
* \param Se dividen los numeros y el total se asigna a resultado
* \return el resultado se imprime en pantalla
*/
float divNum (float a, float b)
{
    float resultado;
    resultado = a/b;
    return resultado;
}

/* *multNum
* \brief Pide dos numeros float y se nultiplican
* \param Se multiplican los numeros y el total se asigna a resultado
* \return el resultado se imprime en pantalla
*/
float multNum (float a, float b)
{
    float resultado;
    resultado = a*b;
    return resultado;
}
/* *factNum
\ *brief Se pide un numero int y se busca su factorial
\ *param Se factoriza el primer operando y el total se le asigna a resultado
* \return el resultado se imprime en pantalla
*/
int factNum(int a)
{
    int resultado;
    if(a==1)
    {
        return 1;
    }
    else
    {
        resultado = a * factNum(a-1);
    }
    return resultado;
}
