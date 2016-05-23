#include <iostream>

int calc_fib(int n) {
    if (n <= 1)
        return n;

    return calc_fib(n - 1) + calc_fib(n - 2);
}

int fibList(int n) {
    int fibMinusTwo;
    int fibMinusOne;
    int currentFib;

    if (n < 2) return n; 

    fibMinusTwo = 0; 
    fibMinusOne = 1; 

    // 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89 ... 
    for(int i = 1; i < n; ++i) {
        currentFib = fibMinusOne + fibMinusTwo;	
	fibMinusTwo = fibMinusOne; 
	fibMinusOne = currentFib;
    }
    
    return currentFib;
}

int main() {
    int n = 0;
    	std::cin >> n;
    	std::cout << fibList(n) << '\n';
    return 0;
}
