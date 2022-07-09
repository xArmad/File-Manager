#ifndef COUNTER_HPP
#define COUNTER_HPP
#include "FileManager/FileManager.hpp"

class Counter : public FileManager {
  public:
    static std::vector<std::string> counter;
  public:
    Counter() : FileManager("timer.txt") {};
    std::vector<int> getCount();
    void setCountStep(int step);
    void increment(int add);
    void decrement(int decrease);
};


#endif