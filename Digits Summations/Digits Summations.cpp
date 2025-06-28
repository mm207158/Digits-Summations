#include <iostream>
using namespace std;
int main() {
	long long n, m;
	cin >> n>> m;
	int units_of_n = n % 10;
	int units_of_m = m % 10;
	int result = units_of_n + units_of_m;
	cout << result;


	return 0;
	
}