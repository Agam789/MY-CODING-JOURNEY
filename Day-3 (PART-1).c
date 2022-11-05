#include<stdio.h>
int main(){
  int a,b,c;
  printf("Enter The Value Of a= ");
  scanf("%d",&a);
  printf("Enter The Value Of b= ");
  scanf("%d",&b);
  printf("Enter The Value Of c= ");
  scanf("%d",&c);
  int sum,v;
  v=a+b+c;
  sum=v/3;
  printf("The Average Is %d",sum);
  return 0;
}
