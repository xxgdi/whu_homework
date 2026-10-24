#include<iostream>
using namespace std;
int main()
{
	int a, n;cout << "numbers:" << endl;cin >> a>>n;
	long long sum=0, n1=0;
	for (int i = 0;i < n;i++) {
		n1 = n1 * 10 + a;
		sum += n1;
	}cout << sum << endl;
	return 0;
}
