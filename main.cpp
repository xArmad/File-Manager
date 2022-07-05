#include "FileManager.cpp"

int main() {
  const char* FILE = "test.txt"; // File to be used
  FileManager fm(FILE); // FileManager Object created
  
  fm.write("This is a test"); // Write to file
  fm.write('\n');

  std::string data;
  fm.read(data); // Read from file

  std::cout << data << std::endl; 

  return 0;
}

