#include<stdio.h>
int main(){
  double p;
  printf("Inserire un numero:");
  scanf("%lf", &p);
  int a=(float)p;
  printf("Il valore double e' %f e il valore intero e' %d\n", p, a);
  return 0;
}
