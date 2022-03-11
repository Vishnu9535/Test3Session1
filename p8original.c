#include<stdio.h>
void input(int *n ,int *r){
  printf("enter the value of n");
  scanf("%d",n);
  printf("enter the value of r");
  scanf("%d",r);
}
int ncr(int n,int r)
{
    int result=1;
    for(int i=1;i<=r;i++)
    {
      for(int i=1;i<=r;i++){
      result=result*(n-i+1)/i;
    }
      }
    return result;

}
void output(int n,int r,float result)
{
    printf("value of ncr if %f",result);
}
int main(){
    int n,r;
    int result;
    input(&n,&r);
    result=ncr(n,result);
    output(n,r,result);
    return 0;
}