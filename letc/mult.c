#include<stdio.h>

//int mult(int x, int y);
int main(){

  int x;
  int y;
  printf("please enter two numbers to be mulipied:\n");
  scanf("%d", &x);
  scanf("%d", &y);
  printf("youve entered %d, %d \n",x,y);
  printf("multipied %d \n",mult(x,y));
  return 0;
}
int mult(int x, int y){
  return x * y;
}
