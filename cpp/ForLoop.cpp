#include <algorithm>
#include <bitset>
#include <climits>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <ctime>
#include <deque>
#include <fstream>
#include <iostream>
#include <limits>
#include <list>
#include <map>
#include <numeric>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <unordered_map>
#include <vector>

// using namespace std;

int main() {
  /* Enter your code here. Read input from STDIN. Print output to STDOUT */
  int a{};
  int b{};

  std::cin >> a;
  std::cin >> b;
  
  std::vector<std::string> nums = {"zero", "one", "two",   "three", "four",
                                   "five", "six", "seven", "eight", "nine"};

  for (int i{a}; i <= b; ++i) {
    if (i >= 1 && i <= 9)
      std::cout << nums[i] << '\n';
    else if (i % 2 == 0)
      std::cout << "even\n";
    else
      std::cout << "odd\n";
  }

  return 0;
}
