#include <iostream>

int main () {
  std::cout << "Program fibonacci" << std::endl;
  int BatasDeret_Fibonacci;
  int IndexDeret_Fibonacci;
  int IndexDeret_Fibonacci1;
  int IndexDeret_Fibonacci2;
  IndexDeret_Fibonacci1 = 1;
  IndexDeret_Fibonacci2 = 0;
  IndexDeret_Fibonacci = IndexDeret_Fibonacci1 + IndexDeret_Fibonacci2;
  std::cin >> BatasDeret_Fibonacci;
  std::cout << IndexDeret_Fibonacci << std::endl;
  for (int Operator_increment = 1; Operator_increment <= BatasDeret_Fibonacci; Operator_increment++) {
    IndexDeret_Fibonacci = IndexDeret_Fibonacci1 + IndexDeret_Fibonacci2;
    IndexDeret_Fibonacci2 = IndexDeret_Fibonacci1;
    IndexDeret_Fibonacci1 = IndexDeret_Fibonacci;
    std::cout << IndexDeret_Fibonacci << std::endl;
  }
  
  std::cin.get();
  return 0;
}