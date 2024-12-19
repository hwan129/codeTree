#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double a, b;

    cin >> a >> b;

    double a_sqrt = sqrt(a), b_sqrt = sqrt(b);
    int num;

    num = floor(a_sqrt) - floor(b_sqrt);

    cout << abs(num);






    return 0;
}