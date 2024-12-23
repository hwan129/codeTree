#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    string stu[] = {"Bessie", "Elsie", "Daisy", "Gertie", "Annabelle", "Maggie", "Henrietta"};
    int score[] = {0,0,0,0,0,0,0};

    int num;
    cin >> num;

    for(int i = 0; i < num; i++){
        string student = "";
        int sco;
        cin >> student >> sco;
        for(int j = 0; j < 7; j++){
            if(student == stu[j]){
                score[j] += sco;
            }
        }
    }

    int min = 0, scnd = 0, count = 0;
    int mini[] = {10000000, 9999999};

    for(int i = 0; i < 7; i++){
        if(score[i] < mini[0]){
            scnd = min;
            mini[1] = score[min];
            min = i;
            mini[0] = score[i];
        } else if(score[i] < mini[1] && score[i] > mini[0]){
            scnd = i;
            mini[1] = score[i];
        } 
        // cout << score[i] << " ";
    }

    // cout << scnd << endl;

    for(int i = 0; i < 7; i++){
        if(score[scnd] == score[i] && scnd != i){
            cout << "Tie";
            return 0;
        }
    }

    cout << stu[scnd];

    return 0;
}