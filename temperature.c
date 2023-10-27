#include<stdio.h>

int main()
{
    int fahr, lower, celcius, upper;

    lower = 0;
    upper = 300;
    fahr = lower;

    printf("Fahrenheight\tCelcius\n");

    while(fahr <= upper)
    {
        celcius = 5* (fahr-32)/9;
        printf("%d\t\t%d\n", fahr, celcius);
        fahr = fahr + 20;
    }

    return 0;

}