#include <iostream>

int get_change(int n) {
  int coins = 0;
  //write your code here
  while ((n - 10) >= 0) {
	n -= 10; 
	coins++; 
  }
  while ((n - 5) >= 0) {
 	n -= 5;
	coins++; 
  }
  while ((n - 1) >= 0) {
	n--; 
        coins++; 
  } 
  return coins;
}

int main() {
  int n;
  std::cin >> n;
  std::cout << get_change(n) << '\n';
}
