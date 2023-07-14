#include <iostream>
using namespace std;
const int DEC_10 = 10;
int totalDigitsOfNumber(int n) {
    int total = 0;
    do {
        total = total + n % DEC_10;
        n = n / DEC_10;
    } while (n > 0);
    return total;
}

int main() {
 	int n;
 	cin >> n;
    cout<<totalDigitsOfNumber(n);
}