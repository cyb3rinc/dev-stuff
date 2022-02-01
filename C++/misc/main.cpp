#include <bits/stdc++.h>

int square_digits(int num) {
  std::string digits = std::to_string(num); 
  std::string res;
  std::vector<int> dv;
  
  for (int i = 0; i < digits.size(); ++i) dv.push_back(digits[i] - '0');
  for (int i = 0; i < dv.size(); ++i) { res += std::to_string(dv[i] * dv[i]); }
  return std::stoi(res);
}

int main() {
  std::cout << square_digits(2345) << std::endl; // returns 149; expectes 9414
  return 0;
}