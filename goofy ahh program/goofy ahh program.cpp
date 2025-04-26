#include <iostream>
using namespace std;

int FindMax(int a, int b) {
    if (a > b) {
        cout << a << " is bigger then " << b << endl;
    }
    else {
        cout << b << " is biggest number" << endl;
    }
    return a, b;
}

int FindMax(int a, int b, int c) {
    if ((a > b) && (a > c)) {
        cout << a << " is biggest number" << endl;
    }
    else if ((b > a) && (b > c)) {
        cout << b << " is biggest number" << endl;
    }
    else {
        cout << c << " is biggest number" << endl;
    }
    return a, b, c;

}

int main()
{
    int number1 = 20;
    int number2 = 13;
    FindMax(number1, number2);

}
