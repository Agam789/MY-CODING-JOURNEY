#include <stdio.h>
#include<math.h>

int main(void) {
  int p,b,h,t;
  printf("Enter Height=");
  scanf("%d",&p);
  printf("Enter Base=");
  scanf("%d",&b);
  h=pow(p,2)+pow(b,2);
  t=pow(h,0.5);
  printf("Hypotaneous Is=%d",t);
  return 0;
}
