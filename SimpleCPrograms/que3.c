/* 3 Accept marks of 5 subjects (out of 100) of a student and display total marks and compute the
percentage also.*/

#include <stdio.h>

int main()
{
    float eng, phy, chem, math, bio; 
    float total, percentage;

    /* Input marks of all five subjects */
    printf("Enter marks of five subjects: \n");
    scanf("%f%f%f%f%f", &eng, &phy, &chem, &math, &bio);

    /* Calculate total and percentage */
    total = eng + phy + chem + math + bio;
    percentage = (total / 500.0) * 100;

    /* Print all results */
    printf("Total marks = %f\n", total);
    printf("Percentage = %f", percentage);

    return 0;
}
