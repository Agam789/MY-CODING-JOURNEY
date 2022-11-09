#include<stdio.h>
int main(){
  //Programme on Age BY VEDIC TIMES
  int age;
  printf("Please Enter Your Age = ");
  scanf("%d",&age);
  if(age<25){
    printf("You Are In Brahmacharya #STUDENT LIFE");
  }
    else if(age<48){
      printf("You Are In A Grihastha #HouseHold Life");
    }
    else if(age<72){
      printf("You Are In A Vanaprastha #Retired Life");
    }
  else{
    printf("Sannyashi #Sanyashi");
  }
  return 0;
}
