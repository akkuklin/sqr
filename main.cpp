#include <iostream>
using namespace std;

int main() {
    int x, n2;
    int n1 = 1;
    cout << "Введите число.. ";
    cin >> x;
    while (n1 != n2){
        n2 = n1;
        n1 = (n1 + x / n1) / 2;
    }
    cout << n2;
    return 0;
}