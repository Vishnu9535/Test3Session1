#include<stdio.h>
#include<string.h>
void input_string(char a[] ){
  printf("enter a string");
  fgets(a,100,stdin);
}
int count_words(char a[]){
int word=1;
for(int i=0;a[i]!='0';i++){
  if(a[i]==' '){
    word++;
  }
}
  return word;
  }
void output(int word){
  printf("number of words in a string is %d",word);
}

int main(){
  char a[100];
  int word;
  input_string(a);
  word=count_words(a);
  output(word);
  return 0;
}