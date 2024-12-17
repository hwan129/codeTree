#include <iostream>
#include <vector>

using namespace std;

int main() {
    int mode, element_nums, option_nums;

    cin >> element_nums >> option_nums;

    vector<int> elements(element_nums);
    vector<int> a(option_nums);
    vector<int> b(option_nums);
    vector<int> c(option_nums);

    for(int i = 0; i < element_nums; i++){
        cin >> elements[i];
    }

    for(int i = 0; i < option_nums; i++){
        cin >> a[i] >> b[i] >> c[i];
    }

    for(int i = 0; i < option_nums; i++){
        if(a[i] == 1){
            elements[b[i]-1] = c[i];
        } else if(a[i] == 2){
            for(int j = b[i]-1; j <= c[i]-1; j++){
                if(elements[j] == 1){
                    elements[j] = 0;
                } else{
                    elements[j] = 1;
                }
            }
        } else if(a[i] == 3){
            for(int j = b[i]-1; j <= c[i]-1; j++){
                elements[j] = 0;
            }
        } else if(a[i] == 4){
            for(int j = b[i]-1; j <= c[i]-1; j++){
                elements[j] = 1;
            }
        }
    }

    for(int i = 0; i < element_nums; i++){
        cout << elements[i] << " ";
    }

    return 0;
}