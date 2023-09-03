#include <stdio.h>
#include <math.h>
#include <stdlib.h>

float soma(float x , float y)
{
    return  x + y ;
}

float primeiroquadradosegundo(float x , float y)
{
    return  x * pow(y,2);
}

float quadrado(float x)
{
    return  pow(x,2);
}

float raizdasomaquadrados(float x , float y)
{
    return  sqrt( (pow(x,2) + pow(y,2)) );
}

float senodadiferenca(float x , float y)
{
    return  sin(x - y);
}

float modulo(float x)
{
    return  abs(x);
}
