#include <libfib.hpp>
#include <iostream>

int main() {
  const unsigned idx = 10;
  std::cout << "Fib " << idx << " is " << fibonacci(idx) << std::endl;
  return 0;
}
