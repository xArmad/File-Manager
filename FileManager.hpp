#ifndef FILEMANAGER_H
#define FILEMANAGER_H
#include "headers.hpp"

class FileManager {
  private:
    std::fstream FileStream;
  public:
    const char* File;
    ~FileManager();
    FileManager() {};
    FileManager(const char* FILE);
    template<typename T> void write(T data);
    template<typename T> T read(T data);
    FileManager &operator=(const FileManager& fm) {
      FileStream.close();
      FileStream.open (fm.File, std::ios::in | std::ios::out);
      return *this;
    };
};

#endif