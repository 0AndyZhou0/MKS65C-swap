#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
  srand(time(NULL));
  int ary[10];
  for(int i = 0;i < 10;i++){
    ary[i] = rand();
  }
  ary[9] = 0;
  for(int i = 0;i < 10;i++){
    printf("%d\n",ary[i]);
  }
  int reverse[10];
  int * p = &ary;
  for(int i = 0;i < 10;i++){
    reverse[9-i] = *p;
    p++;
  }
  for(int i = 0;i < 10;i++){
    printf("%d\n",reverse[i]);
  }
  return 0;
}
