#include <stdio.h>

int main(void) {
  int a, b, c;
  
  printf("Podaj a: ");
  scanf("%d", &a);
  printf("Podaj b: ");
  scanf("%d", &b);
  printf("Podaj c: ");
  scanf("%d", &c);

  if(a>b) {
    if(a>c) {
      printf("Największa liczba to a: %d", a);
    }
    else {
      printf("Największa liczba to c: %d", c);
    }
  }
  else {
    if(b>c) {
      printf("Największa liczba to b: %d", b);
    }
    else {
      printf("Największa liczba to c: %d", c);
    }
  }
  return 0;
}