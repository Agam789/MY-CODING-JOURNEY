#include <stdio.h>
#include<math.h>

int main(void) {
  //Pythagorus Theorum//
  int length,width;
  printf("Enter tHE value of length\n");
  scanf("%d",&length);
  printf("Enter The Value Of Width\n");
  scanf("%d",&width);
  float Hyp,ui;
  Hyp=pow(length,2)+pow(width,2);
  ui=sqrt(Hyp);
  printf("The Value Of Hypotaneous is %f",ui);
  return 0;
  }
