#include<iostream>
using namespace std;
int main() {
	int n1 = 1, n2 = 1, n3;
	cout << n1 << "\n" << n2 << endl;
	for (int i = 0;i < 20;i++) {
		n3 = n1 + n2;
		cout << n3<< endl;
		n1 = n2;
		n2 = n3;
	}
}
