#include <iostream>
#include <string>

int
main()
{
  std::string name; // creating variable
  std::cout << "Please, enter your name: ";
  std::cin >> name; // чтение переменной из консоли
  std::cout << std::endl
            << "Hello world from " << name
            << std::endl; // вывод сообщения в консоль
}
