#include<stdio.h>

int main(){
  int vett[2], somma;
  float media;
  printf("Inserire il 1° numero:");
  scanf("%d",&vett[0]);
  printf("Inserire il 2° numero:");
  scanf("%d", &vett[1]);
  printf("Inserire il 3° numero:");
  scanf("%d", &vett [2]);
  
  printf ("%d\n%d\n%d\n", vett[0], vett[1], vett[2]);

  somma=vett[0]+vett[1]+vett[2];
  media=somma/3;

  printf("Somma: %d\nMedia: %.00f\n", somma, media);
  return 0;
}
