#include<stdio.h>
int input_degree()
{
  int n;
  printf("enter the degree of polynomial");
  scanf("%d",&n);
  return n;
}
float input_x(){
  float x;
  printf("enter the value of x");
  scanf("%f",&x);
  return x;
}
void input_coefficients(int n, float a[n])
{
  printf("enter the coefficients of ");
  int i;
  for(i=0;i<n;i++)
    {
      scanf("%f",&a[i]);
    }
}
float evaluate_polynomial(int n, float a[n], float x)
{
  float d=0,b,c,result;
  d=d+a[0];
  for(int i=0;i<n;i++){
    b=d*x;
    c=a[i+1]+b;
    b=d;
  }  
 return d; 
}
void out_put(int n, float a[n], float x, float result){
  printf("The value of ");
    for(int i=0;i<n;i++){
        printf("%.0f +",a[i]);
    }
    printf("%.0f",a[n]);
    printf("is %.2f",result);
}
int main(){
    int n;
    float x,result;
    n=input_degree();
    x=input_x();
    float a[n];
    input_coefficients(n,a);
    result=evaluate_polynomial(n,a,x);
    out_put(n,a,x,result);
    return 0;
}







