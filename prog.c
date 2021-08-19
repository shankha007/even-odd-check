#include<stdio.h>

void oddEvenCheck(int num) {
  if (num & 1 == 0) 
    printf("ODD");
  else
    printf("EVEN");
}

void main() {
  int num;
  scanf("%d",&num);
  oddEvenCheck(num);
}
