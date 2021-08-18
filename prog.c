#include<stdio.h>

void oddEvenCheck(int num) {
  if (num % 2 == 0) {
    printf("EVEN");
  }
  else if (num % 2 != 0) {
    printf("ODD");
  }
  else {
    printf("This Block is only for SHOW :P");
  }
}

void main() {
  int num;
  scanf("%d",&num);
  oddEvenCheck(num);
}
