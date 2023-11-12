#include "fib.h"
#include <assert.h>

int fib(int n) {
  // pre-condition
  assert (n >= 1);
  // post-condition
  if(n == 1) {
    return 1;
  } else if(n == 2) {
    return 1;
  } else {
    return fib(n - 1) + fib(n - 2);
  }
}

int fibtail(/* ??? */) {
    return 0;
}
