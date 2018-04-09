
float sumaNum (float a, float b)
{
    float resultado;
    resultado = a+b;
    return resultado;
}

float restaNum (float a, float b)
{
    float resultado;
    resultado = a-b;
    return resultado;
}

float divNum (float a, float b)
{
    float resultado;
    resultado = a/b;
    return resultado;
}

float multNum (float a, float b)
{
    float resultado;
    resultado = a*b;
    return resultado;
}



float factnum(float a)
{
    float resultado;
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
