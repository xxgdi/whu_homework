#include<iostream>
using namespace std;
int main() {
	int a = 1;int mul;
	for (a;a < 10;a++) {
		int b = 1;
		for (b;b < 10;b++) {
			mul = a * b;
			cout << a << "*" << b << "=" << mul << endl;
		}
	}return 0;
}
