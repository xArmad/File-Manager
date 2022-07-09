#ifndef COUNTER_CPP
#define COUNTER_CPP
#include "Counter.hpp"

std::vector<int> Counter::getCount() {
  counter = getData();
  return counter;
}

#endif