#include <algorithm>
#include <cmath>
#include <cstdio>
#include <iostream>
#include <vector>

int max_of_four(int a, int b, int c, int d);

int main() {
  int a{};
  int b{};
  int c{};
  int d{};

  std::cin >> a >> b >> c >> d;

  int result = max_of_four(a, b, c, d);

  std::cout << result << '\n';

  return 0;
}

int max_of_four(int a, int b, int c, int d) {
  int maxValue{a};

  if (b > maxValue)
    maxValue = b;
  if (c > maxValue)
    maxValue = c;
  if (d > maxValue)
    maxValue = d;

  return maxValue;
}
