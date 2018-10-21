# include <stdio.h>
# include <stdlib.h>
# include "sieve.h"

int sieve(int num){
  if(num==1){
    return 2;
  }
  int size;
  if (num < 5000){
    size = (int)(num * log(num) * 1.3 + 5);
  }
  else{
    size = (int)(num * log(num) * 1.15);
  }
  char * array = malloc(size*sizeof(char));
  int s = (int)(sqrt(size));

for (int i=3;i<s;i+=2){
  if(array[i]==0){
    for(int p = 3*i;p<size;p+=2*i){
      array[p]=1;
    }
  }
}
  num--;
  for (int i = 3; i < size; i+=2){
    if (array[i]== 0){
      num--;
    }
    if(num == 0){
      return i;
    }
  }

  return 0;
}
