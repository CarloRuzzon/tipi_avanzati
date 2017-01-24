#include<stdio.h>
int main(){
  float a=12;
  float *a_p=&a;
  printf("La variabile si trova all'indirizzo: %p\n", a_p);
return 0;
}
