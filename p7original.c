#include<stdio.h>
typedef struct _fraction
{
int num,den;
}Fraction;
Fraction input_fraction(){
  Fraction f;
  printf("enter the  fraction");
  scanf("%d %d",&f.num,&f.den);
  return f;
}
Fraction add_fractions(Fraction f1, Fraction f2)
{
  float num1,den1,num2,den2;
  num1=f.num;
}