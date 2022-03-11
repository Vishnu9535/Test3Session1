#include<stdio.h>
int input_size()
{
  int n;
  printf("enter the array size");
  scanf("%d",&n);
  return n;
}
void input_array(int n, int a[n])
{
  printf("enter the elements of array");
  for(int i=0;i<n;i++){
    scanf("%d",&a[i]);
    
  }
}
  int find_largest(int n, int a[n]){
   int b;
    b=a[0];
    for(int i=1;i<=n;i++){
     if(a[i]>b){
       b=a[i];
       }
     }
    return b;
   }

void out_put(int n, int a[n], int b){
  printf("the largest element is %d",b);
}
int main(){
  int n,a[100],b;
  n=input_size();
  input_array(n,a);
  b=find_largest(n,a);
  out_put(n,a,b);
  return 0;
  }
  
