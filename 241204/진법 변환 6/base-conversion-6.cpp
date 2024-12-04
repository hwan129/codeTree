#include <iostream>
#include <vector>
#include <cmath>
#include <string>

using namespace std;

int main() {
    int num1, num3;
    string num2;
    vector<char> output;

    cin >> num1 >> num2 >> num3;

    int decimal = 0;

    for(int i = 0; i < num2.size(); i++){
        
        if(num2[i] >= 'a' && num2[i] <= 'z'){
            decimal += (num2[i]- 'a' + 10) * pow(num1, num2.size() - i - 1);
        }
        else{
            decimal += (num2[i]- '0') * pow(num1, num2.size() - i - 1);
        }
    }
    int a = decimal;

    while(1){
        if(a % num3 > 10){
            output.push_back('a' + a % num3 - 10);
        }
        else{
            output.push_back('0' + a % num3);
        }

        if(a/num3 == 0){
            break;
        }

        a = a / num3;
    }
    
    for (int i = output.size() - 1; i >= 0; i--) {
        cout << output[i];
    }

    

    return 0;
}