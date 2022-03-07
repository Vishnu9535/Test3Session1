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
    for(int i=0;i<n-r;i++)
    {
        result=result*(n-r+1)/n-r;
    }
    return result;

}
void output(int n,int r,float result)
{
    printf("value of ncr if %f",result);
}
int main(){
    int n,r;
    float result;
    input(&n,&r);
    result=ncr(n,result);
    output(n,r,result);
  return 0;
}
