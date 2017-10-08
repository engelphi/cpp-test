#include <utility>
#include <iostream>

std::pair<int, int> test() {
  return std::pair(4,5);
}

int main() {
  auto [x, y] = test();
  std::cout << "x=" << x << " y=" << y << std::endl;
  return 0;
}
