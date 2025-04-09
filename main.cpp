#include <libfib.hpp>
#include <print>

int main() {
  const unsigned idx = 10;
  std::print("Fib {} is {}\n", idx, fibonacci(idx));
}
