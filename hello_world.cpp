#include <iostream>
#include <string>

int main() {
  std::string name;
  std::cout << "Please, enter your name: ";
  std::cin >> name;
  std::cout << std::endl << "Hello world from " << name << std::endl;
}
