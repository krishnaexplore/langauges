#include<stdio.h>

void playgame(){
  printf("play game called\n");
}

void loadgame(){
  printf("load game called\n");
}

void playmultiplayer(){
  printf("play multi player called\n");
}

int main(){

  int input;

  printf("1 play game\n");
  printf("2 load game\n");
  printf("3 multi player\n");
  printf("4 exit\n");
  printf("select \n");
  scanf("%d", &input);
  int f = 1;
  while(f!=0){
  switch(input){
    case 1:
      playgame();
      break;
    case 2:
      loadgame();
      break;
    case 3:
      playmultiplayer();
      break;
    case 4:
      printf("thank you for playing \n");
      f  = 0;
      break;
    default:
      printf("invalid input\n");
      break;
  }}
  return 0;
}
