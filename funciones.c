//suma
float sumaNum (float a, float b)
{
    float resultado;
    resultado = a+b;
    return resultado;
}
//resta
float restaNum (float a, float b)
{
    float resultado;
    resultado = a-b;
    return resultado;
}
//division
float divNum (float a, float b)
{
    float resultado;
    resultado = a/b;
    return resultado;
}
//multiplicacion
float multNum (float a, float b)
{
    float resultado;
    resultado = a*b;
    return resultado;
}


//factorial
int factnum(int a)
{
    int resultado;
    if(a==1)
    {
        return 1;
    }
    else
    {
        resultado = a * factnum(a-1);
    }
    return resultado;
}
