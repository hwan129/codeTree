#include <iostream>
using namespace std;

int main() {
    int num, alphabet[26] = {0};
    

    cin >> num;

    for(int i = 0; i < num; i++){
        char alpha;
        cin >> alpha;
        if(alpha < 'a' || alpha > 'z'){
            break;
        }
        alphabet[alpha-97]++;
        // cout << alpha;
    }

    for(int i = 0; i < 26; i++){
        char alpha = i + 97;
        if(alphabet[i] > 0){
            cout << alpha << " : " << alphabet[i] << endl;
        }
    }

    return 0;
}