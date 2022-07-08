#ifndef COUNTER_HPP
#define COUNTER_HPP
#include "FileManager.hpp"

class Counter : public FileManager {
  private:
    int h[2]{0,0}; 
    int m[2]{0,0}; 
    int s[2]{0,9};
  public:
    Counter() : FileManager("timer.txt") {};
    int getCount();
    void setCountStep(int step);
    void increment(int add);
    void decrement(int decrease);
};


#endif