#include <stdio.h>
int main()

{
   float SalFunc, SalFuncReaj;
   scanf("%f", &SalFunc);
   if (SalFunc <= 300) 
      SalFuncReaj = (0.35 * SalFunc) + SalFunc;
   else
      SalFuncReaj = (0.15 * SalFunc) + SalFunc;
   printf("%f", SalFuncReaj);   
}
