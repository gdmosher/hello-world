

#include <iostream>
#include <ctime>
using namespace std;

long long fib(int n);

long long fib(int n) {
	if (n == 1 || n == 2)
		return 1;

	return fib(n - 1) + fib(n - 2);
}
int main() {
	int n = 30;
//	int n = 45;	// max
	clock_t start;
	clock_t end;

	start = clock();

	cout << fib(n) << endl;


	end = clock();
	cout << (end - start / CLK_TCK);

	return 0;
}