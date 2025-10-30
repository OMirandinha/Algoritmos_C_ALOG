#include <stdio.h>
int main() {
   float SalFunc, SalFuncReaj;
   scanf("%f", &SalFunc);
   if (SalFunc <= 300)
      SalFuncReaj = 1.35 * SalFunc;
   else
      SalFuncReaj = 1.15 * SalFunc;
   printf("%f", SalFuncReaj);   
}