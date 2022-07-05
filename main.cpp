#include "FileManager.cpp"

int main() {
  const char* FILE = "another.txt"; // File to be used
  FileManager fm(FILE); // FileManager Object created
  
  fm.write("This is a test"); // Write to file
  fm.write('\n');

  std::string data;
  std::cout << fm.read(data) << std::endl; // Read from file

  fm = "new.txt"; // Change file
  fm.write("This is a new file"); // Write to file
  fm.write('\n');
  
  std::cout << fm.read(data) << std::endl; // Read from file
  return 0;
}

