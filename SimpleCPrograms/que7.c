/*7. Accept temperatures in Fahrenheit (F) and print it in Celsius(C) and Kelvin (K) (Hint: C=5/9(F-32), K = C +
273.15)*/

#include<stdio.h>

int main()
{
    //Fahrenheit (F) and  Celsius(C) and Kelvin (K)
    float F, C, K;
    printf("Please enter temperature in Fahrenheit = ");
    scanf("%f", &F);

//celcius
    C = 5*(F-32)/9;
//Kelvin
    K = C+273.15;

    printf("Temperature in Celcius= %0.2f\n Temperature in Kelvin= %0.2f", C, K);
    return 0;
}