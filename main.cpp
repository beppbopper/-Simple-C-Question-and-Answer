// Example program
#include <iostream>
#include <string>

int main()
{
  std::string name;                             /* Question about Name */
  std::cout << "What is your name? ";           
  getline (std::cin, name);
  std::cout << "Hello, " << name << "!\n";
  
  std::string age;                              /* Question about Age */
  std::cout << "What is your age? ";
  getline (std::cin, age);
  std::cout << "OK! "
  ;
  std::string school;                           /* Question about School */
  std::cout << "Where are studying at? ";
  getline (std::cin, school);
  std::cout << "Thanks,  " << name << "!\n";
}
