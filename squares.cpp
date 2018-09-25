#include <iostream>
#include <iomanip>

int square(int);

/*
 Squares of int values up to 100
 output value and result in 2 columns
 setw() to manage output
*/
int main() {
    int val;

    for(int i = 0; i <= 100; i++) {
        val = square(i);
        std::cout << std::setw(3);
        std::cout << i << " " << val << std::endl;
    }
    return 0;
}

int square(int x) {
    return x*x;
}
