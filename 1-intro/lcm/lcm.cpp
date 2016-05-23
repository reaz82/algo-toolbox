#include <iostream>

long long slowLcm(int a, int b) { 
  int maxAB = a; 
  int minAB = b; 
  //write your code here
  if (b > a) { 
	maxAB = b;
	minAB = a; 
  } 

  for (int i = 1; i <= maxAB; i++) {
	 if (!( ((long long)i*maxAB) % minAB)) {
		return ((long long)i * maxAB);
	}
 }
  return (long long)a*b;
}

int gcd(int a, int b) {
  int a_prime; 

	if (b == 0) return a; 

	a_prime = a	% b; 

  return gcd(b, a_prime);	
}

long long lcm(int a, int b) { 
	int gcdValue = gcd(a, b); 

	return ((long long)a * b)/gcdValue;	
}

int main() {
  int a, b;
  std::cin >> a >> b;
  std::cout << lcm(a, b) << std::endl;
  return 0;
}
