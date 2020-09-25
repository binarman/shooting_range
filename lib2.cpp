#include "lib1.h"
#include "lib2.h"

int res2;

void bar(int n){
  res2 = 0;
  for (int i = 0; i < n; ++i){
    for (int j = 0; j < i; ++j)
      res2 += (i*j)/(i+j+1);
    for (int j = 0; j < i; ++j)
      res2 += (i*j)%(i+j+1);
  }
  foo(n);
}

