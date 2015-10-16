-#include <stdio.h>
-#include <math.h>
-int main()
-{
-  double a,x,G,F,Y,m,n,k;
-  int s;
-  printf("Vvedite x: ");
-  scanf ("%fl", &x);
-  printf("Vvedite a ");
-  scanf ("%fl", &a);
   printf("/n Viberete znachenie: \n\"1\" for G\n\"2\" for F\n\"3\" for Y\n");
-   m=(10*a*a+11*a*x+3*x*x);                                        //Вычисление значение m
-   n=10*a*a-7*a*x+x*x;                                             //Вычисление значения n
-   k=45*a*a-79*a*x+30*x*x                                          //Вычисление значение k

    switch(s){
      case 1:
            if (m!=0) {                                             //Условие m
              G=-5*(-2*a*a+a*x+3*x*x)/m;                            //Вычисление значение G
              print("%fl",G);}
            else printf("Neudovletvorjaet usloviu.\n");
            break;
      case 2:
            if (n>=-1 && n<=1){                                     //Условие n
              F=sin(n);                                             //Вычисление значение F
              print ("%fl",F);}
            else printf("Neudovletvorjaet usloviu.\n");
            break;
      case 3:
            if (k>=-1 && k<=1){                                     //Условие k
              Y=atan(k);                                            //Вычисление значение Y
              print ("%fl",Y);}
            else printf("Neudovletvorjaet usloviu.\n");
            break;
-  return 0;
-}
