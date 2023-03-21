#include <iostream>
#include <vector>

int main() {
	std::cout << "Hello, world!" << std::endl;
	int n;
	std::cin >> n;
	std::vector<int>a(n + 1);
	a[0] = 0;
	a[1] = 1;
	for (int i = 2; i < n; ++i)
		a[i] = a[i - 1] + a[i - 2];
	for (int i = 0; i < n; ++i)
		std::cout << a[i] << std::endl;
	return 0;
}
