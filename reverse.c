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
  int * aryp = &ary;
  int * reversep = &reverse;
  for(int i = 0;i < 10;i++){
    *(reversep + 9 - i) = *(aryp + i);
  }
  for(int i = 0;i < 10;i++){
    printf("%d\n",reverse[i]);
  }
  return 0;
}
