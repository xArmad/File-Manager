#ifndef FILEMANAGER_CPP
#define FILEMANAGER_CPP
#include "FileManager.hpp"

FileManager::FileManager(const char* FILE) : File(FILE) {
  if (!FileStream.is_open() and !FileStream.good()) {
    std::cout << "Error opening file: " << File << std::endl;
    exit(1);
  }
}

FileManager& FileManager::operator=(const char* FILE) {
  std::fstream f;
  f.open(FILE, std::ios::in | std::ios::out);
  if (!f.is_open() and !f.good()) 
  {
    std::cout << "Error opening file: " << FILE << std::endl;
    return *this;
  }
  f.close();
  FileStream.close();
  this->File = FILE;
  return *this;
};

template<typename T> FileManager& FileManager::operator>>(T data) {
  FileStream.close();
  FileStream.open (File, std::ios::app);

  if (!FileStream.bad()) {
    FileStream << data;
  }

  return *this;
}

template<typename T> FileManager& FileManager::operator<<(T data) {
  FileStream.close();
  FileStream.open (File, std::ios::in | std::ios::out);

  if (!FileStream.bad() and !FileStream.eof()) {
    for(int i = 1; getline(FileStream, data);) {
      std::cout << i++ << ") " << data << std::endl;
      this->data.push_back(data);
    }
  }

  return *this;
}

auto FileManager::getData() -> std::vector<std::string> {
  return data;
}

FileManager::~FileManager() {}

#endif