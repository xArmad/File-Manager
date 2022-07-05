#ifndef FILEMANAGER_CPP
#define FILEMANAGER_CPP
#include "FileManager.hpp"

FileManager::FileManager(const char* FILE) : File(FILE) {
  if (!FileStream.is_open() and !FileStream.good()) {
    std::cout << "Error opening file: " << File << std::endl;
    exit(1);
  }
}

template<typename T> void FileManager::write(T data) {
  FileStream.close();
  FileStream.open (File, std::ios::app);

  if (!FileStream.bad()) {
    FileStream << data;
  }
}

template<typename T> T FileManager::read(T data) {
  FileStream.close();
  FileStream.open (File, std::ios::in | std::ios::out);

  if (!FileStream.bad() and !FileStream.eof()) {
    for(int i = 1; getline(FileStream, data);) {
      std::cout << i++ << ") " << data << std::endl;
    }
  }

  return data;
}

FileManager::~FileManager() {}

#endif