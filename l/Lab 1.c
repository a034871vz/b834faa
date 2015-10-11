#include <stdio.h>
#include <math.h>
int main()
{
    float a,x,G,F,Y;
    printf("Vvedite x: ");
    scanf ("%f", &x);
    printf("Vvedite a ");
    scanf ("%f", &a);
    G=-5*(-2*a*a+a*x+3*x*x)/(10*a*a+11*a*x+3*x*x);//Вычисление значения G
    printf("G=%f\n\n", G);

    printf("Vvedite x ");
    scanf ("%f", &x);
    printf("Vvedite a ");
    scanf ("%f", &a);
    F=sin(10*a*a-7*a*x+x*x);//Вычисление значения F
    printf("F=%f\n\n", F);

    printf("Vvedite x ");
    scanf ("%f", &x);
    printf("Vvedite a ");
    scanf ("%f", &a);
    Y=atan(45*a*a-79*a*x+30*x*x);//Вычисление значения Y
    printf("Y=%f\n\n", Y);
    return 0;
}
