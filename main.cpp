#include <iostream>
int fib(int n) {
	if (n == 1)
		return 0;
	else if (n == 2)
		return 1;
	else
		return fib(n - 1) + fib(n - 2);
}

int main() {
	std::cout << "Hello, world!" << std::endl;
	int n;
	std::cin >> n;
	std::cout << fib(n) << std::endl;
	return 0;
}
