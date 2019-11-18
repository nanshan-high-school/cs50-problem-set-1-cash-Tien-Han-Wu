#include <iostream>
using namespace std;
int main() {
    int money;
    int a = 0;
    int b = 1000.0;
    cin >> money;
    do {
        a = a + money / b;
        money = money - (money / b) * b;
        b = b / 10;
    } while (money > 0);
    cout << a;
}
