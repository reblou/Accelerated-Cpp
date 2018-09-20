#include <iostream>
using namespace std;

int main() {
    int x = 10;
    int& y = x;

    cout << x << endl;
    cout << y << endl;

    x += 5;


    cout << x << endl;
    cout << y << endl;

    y += 5;

    cout << x << endl;
    cout << y << endl;
    return 0;
}
