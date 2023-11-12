#include "sum.h"

#include <assert.h>

// Sum integers 1 to n
int sum (int n) {
  // pre-condition
  assert (n >= 1);
  // post-condition
  if (n > 1) {
    return n + sum (n - 1);
  }
  else {
    return 1;
  }
}

// Sum integers 1 to n 
int sumtail(/* ??? */) {
  return 0;
}

// Sum integers 1 to n 
int sumwhile(/* ??? */) {
  return 0;
}

