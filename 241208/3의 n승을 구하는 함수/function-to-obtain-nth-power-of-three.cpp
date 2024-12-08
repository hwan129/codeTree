#include <iostream>

using namespace std;

int calculator(int num){
    if(num == 0)
        return 1;
    return 3*calculator(num-1);
}

int main() {
    int exponents;
    
    cin >> exponents;

    int result = calculator(exponents);

    cout << result;
    
    return 0;
}
