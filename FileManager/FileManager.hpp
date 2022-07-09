#ifndef FILEMANAGER_H
#define FILEMANAGER_H

class FileManager {
  private:
    std::fstream FileStream;
    std::vector<std::string> data;
  public:
    const char* File;
    FileManager() {};
    FileManager(const char* FILE);
    ~FileManager();
    
    FileManager& operator=(const char* FILE);
    template<typename T> FileManager& operator>>(T data);
    template<typename T> FileManager& operator<<(T data);
    
    auto getData() -> std::vector<std::string>;
};

#endif