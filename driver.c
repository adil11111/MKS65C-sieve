#include <stdio.h>
#include <stdlib.h>
#include "sieve.h"
#include <time.h>

int main(int argc, char * argv[]){
  //clock_t begin = clock();
  int iterations = 10;
  int target = 1500000;
  if(argc > 1){
    target = atoi(argv[1]);
  }
  if(argc > 2){
    iterations = atoi(argv[2]);
  }


  int ans = 0;
  while(iterations>0){
      ans=sieve(target);
      iterations--;
      printf("The n=%d prime is %d\n", target, ans );

      //this is to modify which prime to
      //potentially avoid CPU caching
      target++;
  }
  //clock_t end = clock();
  //double time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
  //printf("%lf\n",time_spent);
  return 0;
}
