#ifndef COUNTER_CPP
#define COUNTER_CPP
#include "Counter.hpp"

int Counter::getCount() {
  return h[0] * 3600 + m[0] * 60 + s[0];
}

#endif