#include <iostream>
using namespace std;
int main() {
    int score;
    cout << "请输入电影打分(0-10): ";
    cin >> score;
    switch (score) {
        case 10:case 9:
            cout << "你认为电影经典" << endl;
            break;
        case 8:case 7:
            cout << "你认为电影非常好" << endl;
            break;
        case 6: case 5:
            cout << "你认为电影一般" << endl;
            break;
        case 4:case 3:case 2:case 1:case 0:
            cout << "你认为电影烂片" << endl;
            break;
        default:
            cout << "输入分数无效（请检查是否超出0-10）" << endl;
            break;
    }
    return 0;
}
