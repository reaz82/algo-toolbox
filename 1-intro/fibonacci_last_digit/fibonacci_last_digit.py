# Uses python3
import sys

def get_fibonacci_last_digit(n):
	# write your code here
	if (n < 2): return n

	fibMinusOne = 1 
	fibMinusTwo = 0 

	for i in range(1,n):
		lastFib = (fibMinusOne + fibMinusTwo) % 10
		fibMinusTwo = fibMinusOne
		fibMinusOne = lastFib

	return lastFib

# 0,1,1,2,3,5,8,13,21,34,55,89....
if __name__ == '__main__':
    input = sys.stdin.read()
    n = int(input)
    print(get_fibonacci_last_digit(n))
