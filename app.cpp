#include <iostream>
#include <string>
#include <iomanip>

int main() {
  std::string name;
  int age;
  double pi = 3.14159;
  float gpa = 4;

  std::cout << "Enter your name: ";
  getline(std::cin >> std::ws, name);

  std::cout << "Enter your age: ";
  std::cin >> age;

  std::cout << "Hello, " << name << std::endl;
  if (age < 18) {
    std::cout << "You are underage." << std::endl;
  }
  else { 
    std::cout << "You are permitted to access our services." << std::endl;
  }

  int area = (int) pi;
  std::cout << area << static_cast<int>(pi) << std::endl;
  std::cout << std::fixed << std::showpoint << std::setprecision(2);
  std::cout << "Your GPA is " << gpa;
  
  return 0;
}
