#include<stdio.h>

void oddEvenCheck(int num) {
  if (num % 2 == 0) 
    printf("EVEN");
  
  else if (num % 2 != 0) 
    printf("ODD");
  
  else 
    printf("If this line ever executes , I am leaving Computer Science!");
  
}

void main() {
  int num;
  scanf("%d",&num);
  oddEvenCheck(num);
}
