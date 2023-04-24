#include<stdio.h>
int main()
{
    int type;
    float kms,miles,pounds,kgs;
    float inches,foot,cms,meters;
    printf("Enter the value to determine the type of conversion: \n1.kms-->miles \n2.inches-->foot \n3.cms-->inches \n4.pounds-->kgs \n5.inches-->meters \n ");
    scanf("%d",&type);
    switch (type)
    {
    case 1:
    goto conversion1;   
    break;

    case 2:
    goto conversion2;
    break;

    case 3:
    goto conversion3;
    break;

    case 4:
    goto conversion4;
    break;

    case 5:
    goto conversion5;
    break;

    // default:
    // printf("Quitting the conversion program.");
    // break;
    }

    conversion1:
        printf("Enter the value in kms = ");
        scanf("%f",&kms);
        miles = kms*(0.621);
        printf("The value of %.2f kms = %.3f miles",kms,miles);     
    conversion2:
        printf("Enter the value in inches = ");
        scanf("%f",&inches);
        foot = inches * 0.0833;
        printf("The value of %.2f inches = %.3f foot.",inches,foot);
    conversion3:
        printf("Enter the value in cms = ");
        scanf("%f",&cms);
        inches = cms * 0.3937;
        printf("The value of %.2f cms = %0.3f inches.",cms,inches);
    conversion4:
        printf("Enter the value in pounds = ");
        scanf("%f",&pounds);
        kgs = pounds * 0.4535;
        printf("The value of %.2f pounds = %.3f kgs.",pounds,kgs);
    conversion5:
        printf("Enter the value in inches = ");
        scanf("%f",&inches);
        meters = inches * 0.0254;
        printf("The value of %.2f inches = %.3f kgs.",inches,meters);

    printf("Quitting the conversion program.");
    return 0;
}