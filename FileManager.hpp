#ifndef FILEMANAGER_H
#define FILEMANAGER_H
#include "headers.hpp"

class FileManager {
  private:
    const char* File;
    std::fstream FileStream;
  public:
    ~FileManager();
    FileManager() {};
    FileManager(const char* FILE);
    template<typename T> void write(T data);
    template<typename T> T read(T data);
    FileManager &operator=(const char* FILE) {
      std::fstream f;
      if (!f.is_open() and !f.good()) {
        std::cout << "Error opening new file: " << FILE << std::endl;
        return *this;
      }
      FileStream.close();
      this->File = FILE;
      return *this;
    };
};

#endif