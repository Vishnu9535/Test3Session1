#include<stdio.h>
void input(int *n ,int *r){
  printf("enter the value of n");
  scanf("%d",n);
  printf("enter the value of r");
  scanf("%d",r);
}
int fact(int n){
  int fn=1;
  int r;
  int i;
  for( i=2;i<=n;i++){
    fn=fn*i;
  }
  return fn;
}
int ncr(int n,int r){
  float result;
  result=(fact(n))/(fact(r)*fact(n-r));
  return result;
}
void output(int n,int r,float result){
  printf("value of ncr is %f",result);
}
int main(){
  int n,r;
  float result;
  input(&n,&r);
  result=ncr(n,r);
  output(n,r,result);
  return 0;
}