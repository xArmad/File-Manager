#include "Include/headers.hpp"
#include "FileManager.cpp"
//#include "Counter.cpp"

int main() {
  FileManager fm("timer.txt");
  std::string hr, min, sec;
  fm << hr << min << sec;
  return 0;
}

