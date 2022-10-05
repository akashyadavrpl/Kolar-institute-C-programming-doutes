#include<stdio.h>
int main()
{

    float smartphone, laptop, TV;

    float avg;

    printf("Enter smartphone amount ");
    scanf("%f", &smartphone);

    printf("Enter laptop amount ");
    scanf("%f", &laptop);

    printf("Enter TV amount ");
    scanf("%f", &TV);

    avg = (smartphone + laptop + TV) / 3;

    printf("Avrage of 3 things %f", avg);

    return 0;
}
