#include<stdio.h>

int main()
{
    int celcius, fahr, upper;

    celcius = 0;

    upper = 200;

    while(celcius <= upper)
    {
        fahr = (1.8*celcius)+32;
        printf("%d\t%d\n", celcius, fahr);
        celcius = celcius + 20;



    }

}