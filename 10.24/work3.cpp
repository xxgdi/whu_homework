#include <iostream>
using namespace std;

bool judge(int x) {
    if (x < 0 || (x % 10 == 0 && x != 0)) return false;
    int Half = 0;
    while (x > Half) {
        Half =Half * 10 + x % 10;
        x /= 10;
    }
    return x ==Half || x == Half / 10;
}

int main() {
    int num;
    cout << "请输入一个整数: ";
    cin >> num;
    
    if (judge(num)) {
        cout << num << " 是回文数" << endl;
    } else {
        cout << num << " 不是回文数" << endl;
    }
    return 0;
}
