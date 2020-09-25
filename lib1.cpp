#include "lib1.h"

int res;

void foo(int n){
  res = 0;
  for (int i = 0; i < n; ++i){
    for (int j = 0; j < i; ++j)
      res += (i*j)/(i+j+1);
    for (int j = 0; j < i; ++j)
      res += (i*j)%(i+j+1);
  }
}

