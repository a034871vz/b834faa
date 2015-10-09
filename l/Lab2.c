#include <stdio.h>
#include <math.h>
int main()
{
  double a,x,G,F,Y;
  int k,m;
  printf("Vvedite x: ");
  scanf ("%fl", &x);
  printf("Vvedite a ");
  scanf ("%fl", &a);
  G=-5*(-2*a*a+a*x+3*x*x)/(10*a*a+11*a*x+3*x*x);                   //Вычисление значения G
  printf("G=%fl\n\n", G);
  
  printf("Vvedite x ");
  scanf ("%fl", &x);
  printf("Vvedite a ");
  scanf ("%fl", &a);
  k=10*a*a-7*a*x+x*x;                                              //Вычисление значения k
       if (k>=-1 && k<=1){F=sin(k);printf("F=%fl\n\n", F);}         //если k от -1 до 1, то вычислять и выводить F
       else{printf("Neudovletvorjaet znacheniu k\n\n");}            //если k любое другое значение, то выводить текст
  
  printf("Vvedite x ");
  scanf ("%fl", &x);
  printf("Vvedite a ");
  scanf ("%fl", &a);
  m=45*a*a-79*a*x+30*x*x;                                           //Вычисление значения m
    if (m>=-1 && m<=1){Y=atan(m);printf("Y=%fl\n\n", Y);}         //если m от -1 до 1, то вычислять и выводить Y
    else{printf("Neudovletvorjaet znacheniu k\n\n");}             //если m любое другое значение, то выводить текст
  printf("Y=%f\n\n",Y);
  return 0;
}
